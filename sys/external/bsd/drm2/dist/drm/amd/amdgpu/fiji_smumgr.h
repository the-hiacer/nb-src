/*	$NetBSD: fiji_smumgr.h,v 1.2 2018/08/27 04:58:20 riastradh Exp $	*/

/*
 * Copyright 2014 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef FIJI_SMUMGR_H
#define FIJI_SMUMGR_H

#include "fiji_ppsmc.h"

int fiji_smu_init(struct amdgpu_device *adev);
int fiji_smu_fini(struct amdgpu_device *adev);
int fiji_smu_start(struct amdgpu_device *adev);

struct fiji_smu_private_data
{
	uint8_t *header;
	uint32_t smu_buffer_addr_high;
	uint32_t smu_buffer_addr_low;
	uint32_t header_addr_high;
	uint32_t header_addr_low;
};

#endif
