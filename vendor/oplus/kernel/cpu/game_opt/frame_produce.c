#include "frame_produce.h"
#include "task_boost/heavy_task_boost.h"
#include "critical_task_boost.h"
#include "game_ctrl.h"

#define FRAME_PRODUCE 1

static ssize_t frame_produce_proc_write(struct file *file,
    const char __user *buf, size_t count, loff_t *ppos)
{
    char page[32] = {0};
    int ret, value;

    ret = simple_write_to_buffer(page, sizeof(page) - 1, ppos, buf, count);
    if (ret <= 0)
        return ret;

    ret = sscanf(page, "%d", &value);
    if (ret != 1)
        return -EINVAL;

    switch (value) {
        case FRAME_PRODUCE: {
            notify_frame_produdce();
            htb_notify_frame_produce();
        } break;
        default: {
        } break;
    }

    return count;
}

static const struct proc_ops frame_produce_proc_ops = {
    .proc_write        = frame_produce_proc_write,
    .proc_read         = seq_read,
    .proc_lseek        = default_llseek,
};

void frame_produce_init(void)
{
    proc_create_data("frame_produce", 0664, game_opt_dir, &frame_produce_proc_ops, NULL);
}

void frame_produce_exit(void)
{
    remove_proc_entry("frame_produce", game_opt_dir);
}
