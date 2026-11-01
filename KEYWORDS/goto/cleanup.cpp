/*
 * project   : https://github.com/Robin005cr/Professional_CPP
 * file name : cleanup.cpp
 * author    : Robin CR
 * mail id   : robinchovallurraju@gmail.com
 * LinkedIn  : https://www.linkedin.com/in/robin-cr/
 * portfolio : https://robin005cr.github.io/
 *
 * Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
 * Suggestions for improvements or better methods are always welcome and appreciated.
 * I value constructive feedback and aim to continuously improve the quality of the work.
 *
 */

// This method is more common in embedded C, in C++ RAII or destructor in class for oops hanles it.
#include <cstdio>
#include <cstdlib>

int process(const char *path)
{
    int result = -1;
    FILE *f = nullptr;
    char *buf = nullptr;

    f = std::fopen(path, "rb");
    if (!f)
        goto cleanup;

    buf = static_cast<char *>(std::malloc(1024));
    if (!buf)
        goto cleanup;

    if (std::fread(buf, 1, 1024, f) == 0)
        goto cleanup;

    result = 0; // success

cleanup:
    std::free(buf);
    if (f)
        std::fclose(f);
    return result;
}