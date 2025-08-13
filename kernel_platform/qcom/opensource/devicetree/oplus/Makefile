SUN_BASE_DTB += ../qcom/sun.dtb ../qcom/sun-v2.dtb ../qcom/sunp.dtb ../qcom/sunp-v2.dtb \
                ../qcom/sun-tp.dtb ../qcom/sun-tp-v2.dtb ../qcom/sunp-tp.dtb ../qcom/sunp-tp-v2.dtb

OPLUS_SUN_BOARDS += erhai-24926-sun-overlay.dtbo\
                    erhai-24926-sun-overlay-DVT.dtbo\
                    erhai-24976-sun-overlay.dtbo\
                    erhai-24976-sun-overlay-DVT.dtbo\
                    erhai-24976-eu-sun-overlay.dtbo\
                    erhai-24976-eu-sun-overlay-DVT.dtbo\
                    erhai-24974-sun-overlay.dtbo\
                    erhai-24974-eu-sun-overlay.dtbo\


dtb-y += $(OPLUS_SUN_BOARDS) $(SUN_BASE_DTB)

always-y        := $(dtb-y)
subdir-y        := $(dts-dirs)
clean-files     := *.dtb *.dtbo
