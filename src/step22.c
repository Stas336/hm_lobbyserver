/*
   hm_lobbyserver - HearthStone HearthMod lobbyserver
   Copyright (C) 2016 Filip Pancik

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <stdio.h>
#include <stdarg.h>
#include <memory.h>
#include <malloc.h>
#include <stdlib.h>

int step22_0(char *dst, int ndst) {const char src[13] = { 0x00, 0x0B, 0x08, 0xFE, 0x01, 0x18, 0x28, 0x20, 0x00, 0x28, 0x00, 0x30, 0x00, };
if(ndst >= 13) { memcpy(dst, src, 13); } else { abort(); }
return 13;}
int step22_1(char *dst, int ndst) {const char src[59] = { 0x00, 0x0C, 0x08, 0x05, 0x10, 0x06, 0x18, 0x49, 0x20, 0x02, 0x28, 0x2D, 0x30, 0x00, 0x12, 0x2B, 0xAA, 0x06, 0x28, 0x0A, 0x12, 0x09, 0x47, 0x43, 0x54, 0x57, 0x02, 0x00, 0x00, 0x02, 0x11, 0x67, 0x39, 0xAB, 0x04, 0x00, 0x00, 0x00, 0x00, 0x12, 0x12, 0x0A, 0x10, 0x0A, 0x0A, 0x08, 0xC7, 0x86, 0xD1, 0xBA, 0x05, 0x10, 0x02, 0x18, 0x01, 0x12, 0x02, 0x10, 0x00, };
if(ndst >= 59) { memcpy(dst, src, 59); } else { abort(); }
return 59;}
int step22_2(char *dst, int ndst) {const char src[33] = { 0x00, 0x0B, 0x08, 0xFE, 0x01, 0x18, 0x29, 0x20, 0x00, 0x28, 0x14, 0x30, 0x00, 0x09, 0x36, 0xE9, 0xE8, 0x48, 0xE2, 0x8B, 0xC2, 0xB9, 0x11, 0xF6, 0x42, 0x63, 0xF5, 0xD3, 0x34, 0x56, 0xC7, 0x18, 0x01, };
if(ndst >= 33) { memcpy(dst, src, 33); } else { abort(); }
return 33;}
int step22_3(char *dst, int ndst) {const char src[272] = { 0x00, 0x0D, 0x08, 0x04, 0x10, 0x01, 0x18, 0x4A, 0x20, 0x00, 0x28, 0x81, 0x02, 0x30, 0x00, 0x0A, 0x12, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x12, 0x09, 0x47, 0x43, 0x54, 0x57, 0x02, 0x00, 0x00, 0x02, 0x11, 0x67, 0x39, 0xAB, 0x04, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x08, 0x47, 0x51, 0x5F, 0x45, 0x4E, 0x54, 0x52, 0x59, 0x22, 0x1E, 0x0A, 0x0F, 0x67, 0x61, 0x6D, 0x65, 0x5F, 0x72, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x5F, 0x69, 0x64, 0x12, 0x0B, 0x48, 0xB6, 0xD2, 0xA3, 0xC7, 0xA4, 0xFC, 0xA2, 0xE1, 0xB9, 0x01, 0x22, 0x0E, 0x0A, 0x08, 0x6D, 0x69, 0x6E, 0x5F, 0x77, 0x61, 0x69, 0x74, 0x12, 0x02, 0x48, 0x4E, 0x22, 0x0E, 0x0A, 0x08, 0x6D, 0x61, 0x78, 0x5F, 0x77, 0x61, 0x69, 0x74, 0x12, 0x02, 0x48, 0x4E, 0x22, 0x0E, 0x0A, 0x08, 0x61, 0x76, 0x67, 0x5F, 0x77, 0x61, 0x69, 0x74, 0x12, 0x02, 0x48, 0x4E, 0x22, 0x19, 0x0A, 0x0C, 0x73, 0x74, 0x64, 0x5F, 0x64, 0x65, 0x76, 0x5F, 0x77, 0x61, 0x69, 0x74, 0x12, 0x09, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x24, 0x0A, 0x0C, 0x72, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x6F, 0x72, 0x5F, 0x69, 0x64, 0x12, 0x14, 0x52, 0x12, 0x09, 0x47, 0x43, 0x54, 0x57, 0x02, 0x00, 0x00, 0x02, 0x11, 0x67, 0x39, 0xAB, 0x04, 0x00, 0x00, 0x00, 0x00, 0x22, 0x19, 0x0A, 0x0A, 0x66, 0x61, 0x63, 0x74, 0x6F, 0x72, 0x79, 0x5F, 0x69, 0x64, 0x12, 0x0B, 0x48, 0xF6, 0x85, 0x8D, 0xAB, 0xBF, 0x9A, 0x8D, 0xAB, 0xC7, 0x01, 0x4A, 0x0A, 0x08, 0x95, 0xA5, 0x67, 0x10, 0xE9, 0xE6, 0xAC, 0xB9, 0x05, 0x52, 0x15, 0x0A, 0x05, 0x0D, 0x93, 0x71, 0x0E, 0x1A, 0x12, 0x0C, 0x0D, 0x67, 0x39, 0xAB, 0x04, 0x15, 0x47, 0x43, 0x54, 0x57, 0x18, 0x02, };
if(ndst >= 272) { memcpy(dst, src, 272); } else { abort(); }
return 272;}
int step22_4(char *dst, int ndst) {const char src[13] = { 0x00, 0x0B, 0x08, 0xFE, 0x01, 0x18, 0x2A, 0x20, 0x00, 0x28, 0x00, 0x30, 0x00, };
if(ndst >= 13) { memcpy(dst, src, 13); } else { abort(); }
return 13;}
int step22_5(char *dst, int ndst) {const char src[64] = { 0x00, 0x0C, 0x08, 0x05, 0x10, 0x06, 0x18, 0x4B, 0x20, 0x02, 0x28, 0x32, 0x30, 0x00, 0x12, 0x30, 0xAA, 0x06, 0x2D, 0x0A, 0x12, 0x09, 0x47, 0x43, 0x54, 0x57, 0x02, 0x00, 0x00, 0x02, 0x11, 0x67, 0x39, 0xAB, 0x04, 0x00, 0x00, 0x00, 0x00, 0x12, 0x17, 0x0A, 0x15, 0x0A, 0x0A, 0x08, 0xC7, 0x86, 0xD1, 0xBA, 0x05, 0x10, 0x02, 0x18, 0x11, 0x12, 0x07, 0x32, 0x05, 0x01, 0x0C, 0x00, 0x00, 0x00, };
if(ndst >= 64) { memcpy(dst, src, 64); } else { abort(); }
return 64;}
int step22_6(char *dst, int ndst) {const char src[208] = { 0x00, 0x0D, 0x08, 0x04, 0x10, 0x01, 0x18, 0x4C, 0x20, 0x00, 0x28, 0xC1, 0x01, 0x30, 0x00, 0x0A, 0x12, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x12, 0x09, 0x47, 0x43, 0x54, 0x57, 0x02, 0x00, 0x00, 0x02, 0x11, 0x67, 0x39, 0xAB, 0x04, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x09, 0x47, 0x51, 0x5F, 0x55, 0x50, 0x44, 0x41, 0x54, 0x45, 0x22, 0x1E, 0x0A, 0x0F, 0x67, 0x61, 0x6D, 0x65, 0x5F, 0x72, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x5F, 0x69, 0x64, 0x12, 0x0B, 0x48, 0xB6, 0xD2, 0xA3, 0xC7, 0xA4, 0xFC, 0xA2, 0xE1, 0xB9, 0x01, 0x22, 0x0E, 0x0A, 0x08, 0x6D, 0x69, 0x6E, 0x5F, 0x77, 0x61, 0x69, 0x74, 0x12, 0x02, 0x48, 0x4A, 0x22, 0x0E, 0x0A, 0x08, 0x6D, 0x61, 0x78, 0x5F, 0x77, 0x61, 0x69, 0x74, 0x12, 0x02, 0x48, 0x4A, 0x22, 0x0E, 0x0A, 0x08, 0x61, 0x76, 0x67, 0x5F, 0x77, 0x61, 0x69, 0x74, 0x12, 0x02, 0x48, 0x4E, 0x22, 0x19, 0x0A, 0x0C, 0x73, 0x74, 0x64, 0x5F, 0x64, 0x65, 0x76, 0x5F, 0x77, 0x61, 0x69, 0x74, 0x12, 0x09, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4A, 0x0A, 0x08, 0x95, 0xA5, 0x67, 0x10, 0xE9, 0xE6, 0xAC, 0xB9, 0x05, 0x52, 0x15, 0x0A, 0x05, 0x0D, 0x93, 0x71, 0x0E, 0x1A, 0x12, 0x0C, 0x0D, 0x67, 0x39, 0xAB, 0x04, 0x15, 0x47, 0x43, 0x54, 0x57, 0x18, 0x02, };
if(ndst >= 208) { memcpy(dst, src, 208); } else { abort(); }
return 208;}
int step22_7(char *dst, int ndst) {const char src[227] = { 0x00, 0x0D, 0x08, 0x04, 0x10, 0x01, 0x18, 0x4D, 0x20, 0x00, 0x28, 0xD4, 0x01, 0x30, 0x00, 0x0A, 0x12, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x12, 0x09, 0x47, 0x43, 0x54, 0x57, 0x02, 0x00, 0x00, 0x02, 0x11, 0x67, 0x39, 0xAB, 0x04, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x09, 0x47, 0x51, 0x5F, 0x55, 0x50, 0x44, 0x41, 0x54, 0x45, 0x22, 0x1E, 0x0A, 0x0F, 0x67, 0x61, 0x6D, 0x65, 0x5F, 0x72, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x5F, 0x69, 0x64, 0x12, 0x0B, 0x48, 0xB6, 0xD2, 0xA3, 0xC7, 0xA4, 0xFC, 0xA2, 0xE1, 0xB9, 0x01, 0x22, 0x0E, 0x0A, 0x08, 0x6D, 0x69, 0x6E, 0x5F, 0x77, 0x61, 0x69, 0x74, 0x12, 0x02, 0x48, 0x4E, 0x22, 0x0E, 0x0A, 0x08, 0x6D, 0x61, 0x78, 0x5F, 0x77, 0x61, 0x69, 0x74, 0x12, 0x02, 0x48, 0x4E, 0x22, 0x0E, 0x0A, 0x08, 0x61, 0x76, 0x67, 0x5F, 0x77, 0x61, 0x69, 0x74, 0x12, 0x02, 0x48, 0x4E, 0x22, 0x19, 0x0A, 0x0C, 0x73, 0x74, 0x64, 0x5F, 0x64, 0x65, 0x76, 0x5F, 0x77, 0x61, 0x69, 0x74, 0x12, 0x09, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x11, 0x0A, 0x0B, 0x6D, 0x61, 0x74, 0x63, 0x68, 0x6D, 0x61, 0x6B, 0x69, 0x6E, 0x67, 0x12, 0x02, 0x10, 0x01, 0x4A, 0x0A, 0x08, 0x95, 0xA5, 0x67, 0x10, 0xE9, 0xE6, 0xAC, 0xB9, 0x05, 0x52, 0x15, 0x0A, 0x05, 0x0D, 0x93, 0x71, 0x0E, 0x1A, 0x12, 0x0C, 0x0D, 0x67, 0x39, 0xAB, 0x04, 0x15, 0x47, 0x43, 0x54, 0x57, 0x18, 0x02, };
if(ndst >= 227) { memcpy(dst, src, 227); } else { abort(); }
return 227;}
int step22_8(char *dst, int ndst) {const char src[208] = { 0x00, 0x0D, 0x08, 0x04, 0x10, 0x01, 0x18, 0x4E, 0x20, 0x00, 0x28, 0xC1, 0x01, 0x30, 0x00, 0x0A, 0x12, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x12, 0x09, 0x47, 0x43, 0x54, 0x57, 0x02, 0x00, 0x00, 0x02, 0x11, 0x67, 0x39, 0xAB, 0x04, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x09, 0x47, 0x51, 0x5F, 0x55, 0x50, 0x44, 0x41, 0x54, 0x45, 0x22, 0x1E, 0x0A, 0x0F, 0x67, 0x61, 0x6D, 0x65, 0x5F, 0x72, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x5F, 0x69, 0x64, 0x12, 0x0B, 0x48, 0xB6, 0xD2, 0xA3, 0xC7, 0xA4, 0xFC, 0xA2, 0xE1, 0xB9, 0x01, 0x22, 0x0E, 0x0A, 0x08, 0x6D, 0x69, 0x6E, 0x5F, 0x77, 0x61, 0x69, 0x74, 0x12, 0x02, 0x48, 0x45, 0x22, 0x0E, 0x0A, 0x08, 0x6D, 0x61, 0x78, 0x5F, 0x77, 0x61, 0x69, 0x74, 0x12, 0x02, 0x48, 0x45, 0x22, 0x0E, 0x0A, 0x08, 0x61, 0x76, 0x67, 0x5F, 0x77, 0x61, 0x69, 0x74, 0x12, 0x02, 0x48, 0x4E, 0x22, 0x19, 0x0A, 0x0C, 0x73, 0x74, 0x64, 0x5F, 0x64, 0x65, 0x76, 0x5F, 0x77, 0x61, 0x69, 0x74, 0x12, 0x09, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4A, 0x0A, 0x08, 0x95, 0xA5, 0x67, 0x10, 0xE9, 0xE6, 0xAC, 0xB9, 0x05, 0x52, 0x15, 0x0A, 0x05, 0x0D, 0x93, 0x71, 0x0E, 0x1A, 0x12, 0x0C, 0x0D, 0x67, 0x39, 0xAB, 0x04, 0x15, 0x47, 0x43, 0x54, 0x57, 0x18, 0x02, };
if(ndst >= 208) { memcpy(dst, src, 208); } else { abort(); }
return 208;}

static int write_byte(char **dst, const char *end, char src)
{
	if(*dst + sizeof(src) > end) {
		abort();
	}

	memcpy(*dst, &src, sizeof(src));
	(*dst)++;
	return 0;
}

static void write_uint(char **dst, const char *end, int src)
{
	char b;

	while(1 == 1) {
		b = (char)(src & 127);
		src >>= 7;

		if(src == 0) {
			break;
		}

		b |= 128;

		write_byte(dst, end, b);
	}

	write_byte(dst, end, b);
}

static char read_byte(char **dst, const char *end)
{
    char out;

    if(*dst + sizeof(char) > end) {
        return -1;
    }

    out = *((char *)(*dst));

    (*dst)++;
    return out;
}

static int read_uint(char **dst, const char *end)
{
    int num = 0, num2;
    int i;

    for(i = 0; (i < 5 && *dst < end); i++) {
        num2 = read_byte(dst, end);

        if(i == 4 && (num2 & 240) != 0) {
            abort();
        }

        if((num2 & 128) == 0) {
            return num | (unsigned int)((unsigned int)num2 << 7 * i);
        }

        num |= (unsigned int)((unsigned int)(num2 & 127) << 7 * i);
    }

    return num;
}

int step22_9_1(char *dst, int ndst, int iplen) {
    const char src[205] = { 0x00, 0x0D, 0x08, 0x04, 0x10, 0x01, 0x18, 0x4F, 0x20, 0x00, 0x28, 0xEB, 0x02, 0x30, 0x00, 0x0A, 0x12, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x12, 0x09, 0x47, 0x43, 0x54, 0x57, 0x02, 0x00, 0x00, 0x02, 0x11, 0x67, 0x39, 0xAB, 0x04, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x08, 0x47, 0x5F, 0x52, 0x45, 0x53, 0x55, 0x4C, 0x54, 0x22, 0x1E, 0x0A, 0x0F, 0x67, 0x61, 0x6D, 0x65, 0x5F, 0x72, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x5F, 0x69, 0x64, 0x12, 0x0B, 0x48, 0xB6, 0xD2, 0xA3, 0xC7, 0xA4, 0xFC, 0xA2, 0xE1, 0xB9, 0x01, 0x22, 0x0B, 0x0A, 0x05, 0x65, 0x72, 0x72, 0x6F, 0x72, 0x12, 0x02, 0x48, 0x00, 0x22, 0x2E, 0x0A, 0x0B, 0x67, 0x61, 0x6D, 0x65, 0x5F, 0x68, 0x61, 0x6E, 0x64, 0x6C, 0x65, 0x12, 0x1F, 0x3A, 0x1D, 0x09, 0xF6, 0x42, 0x63, 0xF5, 0xD3, 0x34, 0x56, 0xC7, 0x12, 0x12, 0x09, 0xEE, 0xA6, 0x0D, 0x57, 0x03, 0x00, 0x00, 0x06, 0x11, 0x8C, 0x27, 0x0B, 0x00, 0x0A, 0x62, 0xA3, 0xAB, 0x22, 0xB6, 0x01, 0x0A, 0x0F, 0x63, 0x6F, 0x6E, 0x6E, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x5F, 0x69, 0x6E, 0x66, 0x6F, 0x12, 0xA2, 0x01, 0x3A, 0x9F, 0x01, 0x0A, 0x12, 0x09, 0x47, 0x43, 0x54, 0x57, 0x02, 0x00, 0x00, 0x02, 0x11, 0x67, 0x39, 0xAB, 0x04, 0x00, 0x00, 0x00, 0x00, 0x12 };

    int pos[4] = {11, 159, 179, 182};
    char *ptr;
	int i;

    for(i = 0; i < (sizeof(pos)/sizeof(int)); i++) {
        ptr = &src[pos[i]];
        int l = read_uint(&ptr, ptr + 4);
        l += (iplen - 14);
        ptr = &src[pos[i]];
        write_uint(&ptr, ptr + 4, l);
    }

    if(ndst >= 205) { memcpy(dst, src, 205); } else { abort(); }
    return 205;
}

int step22_9_2(char *dst, int ndst) {const char src[185] = { 0x18, 0x8C, 0x1D, 0x22, 0x06, 0x45, 0x6A, 0x63, 0x44, 0x65, 0x49, 0x2A, 0x13, 0x0A, 0x07, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x12, 0x08, 0x2A, 0x06, 0x32, 0x30, 0x38, 0x38, 0x39, 0x31, 0x2A, 0x0D, 0x0A, 0x04, 0x67, 0x61, 0x6D, 0x65, 0x12, 0x05, 0x18, 0xAA, 0x80, 0xC4, 0x06, 0x2A, 0x0C, 0x0A, 0x06, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x12, 0x02, 0x18, 0x01, 0x2A, 0x0B, 0x0A, 0x02, 0x69, 0x64, 0x12, 0x05, 0x18, 0xB2, 0xB0, 0xAA, 0x1C, 0x2A, 0x0F, 0x0A, 0x09, 0x72, 0x65, 0x73, 0x75, 0x6D, 0x61, 0x62, 0x6C, 0x65, 0x12, 0x02, 0x10, 0x01, 0x2A, 0x1E, 0x0A, 0x12, 0x73, 0x70, 0x65, 0x63, 0x74, 0x61, 0x74, 0x6F, 0x72, 0x5F, 0x70, 0x61, 0x73, 0x73, 0x77, 0x6F, 0x72, 0x64, 0x12, 0x08, 0x2A, 0x06, 0x6F, 0x44, 0x69, 0x70, 0x49, 0x66, 0x4A, 0x0A, 0x08, 0x95, 0xA5, 0x67, 0x10, 0xE9, 0xE6, 0xAC, 0xB9, 0x05, 0x52, 0x15, 0x0A, 0x05, 0x0D, 0x93, 0x71, 0x0E, 0x1A, 0x12, 0x0C, 0x0D, 0x67, 0x39, 0xAB, 0x04, 0x15, 0x47, 0x43, 0x54, 0x57, 0x18, 0x02, };
if(ndst >= 158) { memcpy(dst, src, 158); } else { abort(); }
return 158;}

int step22_9_ip(char *dst, int ndst, const char *ip, const int iplen)
{
	int i;
    dst[0] = iplen;
    for(i = 0; i < iplen; i++) {
        dst[i + 1] = ip[i];
    }
    return iplen + 1;
}
