class DataStream {
public:
    int count = 0, target, val;
    DataStream(int value, int k) {
        val = value;
        target = k;
    }
    
    bool consec(int num) {
        if(num == val) count++;
        else count = 0;
        return count >= target ? true : false;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
