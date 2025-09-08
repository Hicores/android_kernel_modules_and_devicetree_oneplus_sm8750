SUN_BASE_DTB += ../qcom/sun.dtb ../qcom/sun-v2.dtb ../qcom/sunp.dtb ../qcom/sunp-v2.dtb \
                ../qcom/sun-tp.dtb ../qcom/sun-tp-v2.dtb ../qcom/sunp-tp.dtb ../qcom/sunp-tp-v2.dtb \
                ../qcom/tuna.dtb ../qcom/tuna7.dtb ../qcom/tunap.dtb \
                ../qcom/kera.dtb ../qcom/kerap.dtb

OPLUS_SUN_BOARDS += pagani-24821-sun-overlay.dtbo\
                    pagani-24875-sun-overlay.dtbo\


dtb-y += $(OPLUS_SUN_BOARDS) $(SUN_BASE_DTB)

always-y        := $(dtb-y)
subdir-y        := $(dts-dirs)
clean-files     := *.dtb *.dtbo
