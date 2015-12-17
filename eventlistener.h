#ifndef EVENTLISTENER_HEADER
#define EVENTLISTENER_HEADER

class EventListener{
    public:
        virtual void onEvent(const Event&)=0;
        virtual bool remove()=0;
};

#endif
