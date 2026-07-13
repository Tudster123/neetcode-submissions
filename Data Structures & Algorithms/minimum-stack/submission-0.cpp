class MinStack {
public:
    MinStack() {
        size = 0;
        capacity = 16;

        stacc = new int[capacity];
        head = stacc;
    }

    ~MinStack()
    {
        delete[] stacc;
    }
    
    void push(int val) {

        if(size<capacity-1)
        {
            *head = val;
            head++;
            size++;
        }
        else
        {
            resize();
            *head = val;
            head++;
            size++;
        }
    }
    


    void pop() {
        
        head--;
        size--;
    }
    
    int top() {
        return *(head-1);
    }
    
    int getMin() 
    {
        int min = INT_MAX;
        for( int i=0; i<size;i++)
        {
            if(min > stacc[i])
            {
                min = stacc[i];
            }
        }

        return min;
    }
    private:

    void resize()
    {
        capacity = capacity * 2;
        int* tempStacc = new int[capacity];
        for(int i=0;i<size;i++)
        {
            tempStacc[i] = stacc[i];
        }

        delete[] stacc;
        stacc = tempStacc;
        head = stacc + size;
    }

    int* stacc = nullptr;
    int* head = nullptr;
    int size = 0;
    int capacity = 0;
};
