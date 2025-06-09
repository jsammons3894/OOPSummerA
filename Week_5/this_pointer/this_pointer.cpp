class Counter {
    public:
        Counter(int value);
        Counter increment(); //takes nothing, returns a counter objecct as a result


    private:
        int value;

};

Counter::Counter(int value){
    this->value = calue; //Data member of this class

    logCounter(*this);
}

void logCounter(const Counter& c);

Counter Counter::increment(){
    value++;
    return *this;
}