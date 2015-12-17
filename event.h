#ifndef EVENT_HEADER
#define EVENT_HEADER

#include <string>
#include <map>

struct EventDatum{
    public:
        virtual void* getPointer()const =0;
};

template<class T>
class TypeDatum:public EventDatum{
    public:
        TypeDatum(T i){
            data=i;
        }
        void* getPointer()const{
            return (void*)&data;
        }
    protected:
        T data;
};


typedef std::map<std::string, EventDatum*> EventData;

#define VOID_CAST(X) *(X*)


class Event{
    public:
        Event(int);
        ~Event();
        void addDatum(std::string, EventDatum*);
        int type() const;
        void free();
        const EventDatum* getDatum(std::string) const;

    protected:
        int _type;
        EventData data;
};

#endif
