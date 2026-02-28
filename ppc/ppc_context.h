#pragma once
#include "ppc_config.h"

#pragma once
#ifndef PPC_CONFIG_H_INCLUDED
#define PPC_CONFIG_H_INCLUDED


#define PPC_IMAGE_BASE 0x82000000ull
#define PPC_IMAGE_SIZE 0xBC0000ull
#define PPC_CODE_BASE 0x820C0000ull
#define PPC_CODE_SIZE 0x209000ull

#ifdef PPC_INCLUDE_DETAIL
#include "ppc_detail.h"
#endif

#endif
