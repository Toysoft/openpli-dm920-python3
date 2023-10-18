FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

SRC_URI:append = " file://port-away-from-SafeConfigParser.patch"

include python3-package-split.inc
