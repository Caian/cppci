#pragma once

template <typename T>
T mysquared(const T& value)
{
#ifdef MYLIB_DEFINE
    return value * value;
#else
    return value * value / value * value;
#endif
}
