#include <iostream>
#include "event_log.cpp"

namespace aic 
{
    void replay_events()
    {
        for (const auto &e : get_event_log())
        {
            cout <<"{" << e.timestamp << "]"
            << e.description << endl ;
        }
    }
}