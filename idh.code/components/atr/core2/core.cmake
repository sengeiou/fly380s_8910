# Copyright (C) 2018 RDA Technologies Limited and/or its affiliates("RDA").
# All rights reserved.
#
# This software is supplied "AS IS" without any warranties.
# RDA assumes no responsibility or liability for the use of the software,
# conveys no license or title under any patent, copyright, or mask work
# right to the product. RDA reserves the right to make changes in the
# software without notification.  RDA also make no representation or
# warranty that such application will be suitable for the specified use
# without further testing or modification.

target_sources(${target} PRIVATE core/${CONFIG_SOC}/atr_core1.o)
target_sources(${target} PRIVATE ${out_rel_dir}/atr_core2.o)

set(target atr_core2)
add_library(${target} STATIC
    core2/at_cmux_engine.c
    core2/at_parse.lex.c
    core2/at_parse.y.c)
target_compile_definitions(${target} PRIVATE OSI_LOG_TAG=LOG_TAG_ATE)
target_include_directories(${target} PUBLIC include)
target_include_directories(${target} PRIVATE src)
target_link_libraries(${target} PRIVATE kernel calclib net)
release_lib(${target})