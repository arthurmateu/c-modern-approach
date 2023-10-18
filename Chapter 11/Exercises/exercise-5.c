void split_time (long total_sec, int *hr, int *min, int *sec)
{
    total_sec -= (*hr = total_sec / 3600) * 3600;
    total_sec -= (*min = total_sec / 60) * 60;
    *sec = total_sec;
}