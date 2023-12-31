MODULE = "ShootYourScreen"
DESCRIPTION = "create screenshots with remote control of your STB"
PACKAGE_ARCH = "${MACHINE_ARCH}"
RDEPENDS:${PN} = "aio-grab"

inherit gitpkgv
PV = "0.2+git"
PKGV = "0.2+git${GITPKGV}"
PR = "r0"

require conf/license/license-gplv2.inc
require openplugins-distutils.inc
