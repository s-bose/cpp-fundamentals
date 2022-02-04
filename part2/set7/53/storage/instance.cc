#include "storage.ih"

Storage *Storage::s_storage;
once_flag Storage::s_once;

Storage *Storage::instance()
{
                      // call constructor once
    call_once(s_once, []{ s_storage = new Storage; }); 
    return s_storage; // return existing storage
}