do_install:append:class-target () {
    python3 -m compileall -b ${D}
}
