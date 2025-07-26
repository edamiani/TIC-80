// MIT License

// Copyright (c) 2017 Vadim Grigoruk @nesbox // grigoruk@gmail.com

// Permission is hereby granted, free of charge, to any person obtaining a copy
#include "core/core.h"

void boot(tic_mem* tic)
{

}

bool init(tic_mem* memory, const char* code)
{
    return true;
}

void close(tic_mem* memory)
{
    // Clean-up
}

void tick(tic_mem* memory)
{
    // Execute a frame's worth of code
}

void bdr(tic_mem* tic, s32 row, void* data)
{

}

void menu(tic_mem* tic, s32 index, void* data)
{

}

void scn(tic_mem* tic, s32 row, void* data)
{

}

TIC_EXPORT const tic_script EXPORT_SCRIPT(RetroAsm) = {
    .id = 0xAA, // choose a unique ID
    .name = "retroasm",
    .fileExtension = ".rasm",
    .projectComment = "//",

    .init = init,
    .close = close,
    .tick = tick,
    .boot = boot,
    .callback = 
	{
        .scanline = scn,
        .border = bdr,
        .menu = menu,
    },

    .getOutline = NULL,
    .eval = NULL,

    .blockCommentStart = "/*",
    .blockCommentEnd = "*/",
    .blockCommentStart2 = NULL,
    .blockCommentEnd2 = NULL,
    .blockStringStart = "\"",
    .blockStringEnd = "\"",
    .stdStringStartEnd = "\"",
    .singleComment = "//",
    .blockEnd = NULL,

    .keywords = NULL,
    .keywordsCount = 0,

    .lang_isalnum = NULL,
    .useStructuredEdition = false,
    .useBinarySection = false,

    .api_keywordsCount = 0,
    .api_keywords = NULL,

    .demo = {NULL, 0, NULL},
    .mark = {NULL, 0, NULL},
    .demos = NULL,
};
