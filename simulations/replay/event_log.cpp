#include <vector>
#include <string>

using namespace std; 

namespace aic 
{
    struct Event
    {
        long timestamp; 
        string description; 
    }; 

    static vector<Event> event_log; 

    void log_event(long ts, const string &desc)
    {
        event_log.push_back({ts, desc}); 
    }

    const vector<Event> &get_event_log()
    {
        return event_log; 
    }
}