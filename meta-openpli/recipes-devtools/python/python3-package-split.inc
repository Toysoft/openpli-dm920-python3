inherit python3-dir

RDEPENDS:{PN}-src = "${PN}"

FILES:${PN}-src = " \
    ${PYTHON_SITEPACKAGES_DIR}/*.c \
    ${PYTHON_SITEPACKAGES_DIR}/*/*.c \
    ${PYTHON_SITEPACKAGES_DIR}/*/*/*.c \
    ${PYTHON_SITEPACKAGES_DIR}/*/*/*/*.c \
    ${PYTHON_SITEPACKAGES_DIR}/*/*/*/*/*.c \
    ${PYTHON_SITEPACKAGES_DIR}/*.h \
    ${PYTHON_SITEPACKAGES_DIR}/*/*.h \
    ${PYTHON_SITEPACKAGES_DIR}/*/*/*.h \
    ${PYTHON_SITEPACKAGES_DIR}/*/*/*/*.h \
    ${PYTHON_SITEPACKAGES_DIR}/*/*/*/*/*.h \
    ${PYTHON_SITEPACKAGES_DIR}/*.exe \
    ${PYTHON_SITEPACKAGES_DIR}/*/*.exe \
    ${PYTHON_SITEPACKAGES_DIR}/*/*/*.exe \
    ${PYTHON_SITEPACKAGES_DIR}/*/*/*/*.exe \
    ${PYTHON_SITEPACKAGES_DIR}/*/*/*/*/*.exe \
    "

# some txt files which should go into -doc
FILES:${PN}-doc += " \
    ${PYTHON_SITEPACKAGES_DIR}/*-info \
    ${PYTHON_SITEPACKAGES_DIR}/*/*-info \
    ${PYTHON_SITEPACKAGES_DIR}/*-INFO \
    ${PYTHON_SITEPACKAGES_DIR}/*/*-INFO \
    ${PYTHON_SITEPACKAGES_DIR}/*-safe \
    ${PYTHON_SITEPACKAGES_DIR}/*/*-safe \
    ${PYTHON_SITEPACKAGES_DIR}/*.txt \
    ${PYTHON_SITEPACKAGES_DIR}/*/*.txt \
    ${PYTHON_SITEPACKAGES_DIR}/*/*/*.txt \
    ${PYTHON_SITEPACKAGES_DIR}/doc \
    ${PYTHON_SITEPACKAGES_DIR}/*/doc \
    ${PYTHON_SITEPACKAGES_DIR}/LICENSE \
    ${PYTHON_SITEPACKAGES_DIR}/README \
    "

FILES:${PN}-dbg += " \
    ${PYTHON_SITEPACKAGES_DIR}/*/.debug \
    ${PYTHON_SITEPACKAGES_DIR}/*/*/.debug \
    ${PYTHON_SITEPACKAGES_DIR}/*/*/*/.debug \
    ${PYTHON_SITEPACKAGES_DIR}/*/*/*/*/.debug \
    ${PYTHON_SITEPACKAGES_DIR}/*.egg-info \
    ${PYTHON_SITEPACKAGES_DIR}/test \
    ${PYTHON_SITEPACKAGES_DIR}/tests \
    ${PYTHON_SITEPACKAGES_DIR}/Test \
    ${PYTHON_SITEPACKAGES_DIR}/Tests \
    ${PYTHON_SITEPACKAGES_DIR}/_test \
    ${PYTHON_SITEPACKAGES_DIR}/*/test \
    ${PYTHON_SITEPACKAGES_DIR}/*/tests \
    ${PYTHON_SITEPACKAGES_DIR}/*/Test \
    ${PYTHON_SITEPACKAGES_DIR}/*/Tests \
    ${PYTHON_SITEPACKAGES_DIR}/*/*/test \
    ${PYTHON_SITEPACKAGES_DIR}/*/*/tests \
    ${PYTHON_SITEPACKAGES_DIR}/*/*/Test \
    ${PYTHON_SITEPACKAGES_DIR}/*/*/Tests \
    "
