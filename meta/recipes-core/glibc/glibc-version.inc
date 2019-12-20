SRCBRANCH ?= "master"
PV = "2.30.9000"
SRCREV_glibc ?= "e1195b207c057ccc61bd5e9334da5c2b361f8b2a"
SRCREV_localedef ?= "cd9f958c4c94a638fa7b2b4e21627364f1a1a655"

GLIBC_GIT_URI ?= "git://sourceware.org/git/glibc.git"

UPSTREAM_CHECK_GITTAGREGEX = "(?P<pver>\d+\.\d+(\.(?!90)\d+)*)"
