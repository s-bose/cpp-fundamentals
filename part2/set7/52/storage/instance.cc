#include "storage.ih"

once_flag Storage::s_once;
Storage *Storage::s_storage;

Storage *Storage::instance()
{
    call_once(s_once, []()
                      { 
                        s_storage = new Storage; 
                      });

    return s_storage;
}
