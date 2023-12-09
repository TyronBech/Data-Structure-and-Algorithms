#ifndef INPUT_RESTRICTED_QUEUE_H_
#define INPUT_RESTRICTED_QUEUE_H_
#include<iostream>
#include<vector>

/// @brief Template class IQueue, it represents the input restricted queue
/// @tparam T is the data type of the object
template<class T>
class IQueue{
private:
    // Private vector, here is going to store all the data in the queue
    std::vector<T> data;
public:
    // Default constructor of the template class
    IQueue() = default;
    /// @brief Method enqueue to add data in the queue
    /// @param data 
    void enqueue(const T& data){
        this->data.push_back(data);
    }
    /// @brief Method dequeue_front to remove the element at the front of the queue
    /// @return It returns the dequeued data
    T dequeue_front(){
        if(!this->empty()){
            T retrieved_data = this->data.front();
            this->data.erase(this->data.begin());
            return retrieved_data;
        }
        return T();
    }
    /// @brief Method dequeue_back to remove the element at the back of the queue
    /// @return It returns the dequeued data
    T dequeue_back(){
        if(!this->empty()){
            T retrieved_data = this->data.back();
            this->data.pop_back();
            return retrieved_data;
        }
        return T();
    }
    /// @brief Method front to check the value present at the front of the queue
    /// @return It returns the front data present in the queue
    T front(){
        if(!this->empty()){
            return this->data.front();
        }
        return T();
    }
    /// @brief Method back to check the value present at the back of the queue
    /// @return It returns the back data present in the queue
    T back(){
        if(!this->empty()){
            return this->data.back();
        }
        return T();
    }
    /// @brief Method print the print all the present data inside the queue
    void print(){
        if(!this->empty()){
            for(size_t i = 0; i < this->data.size(); i++){
                std::cout << this->data[i];
                if(i == this->data.size() - 1){
                    std::cout << ' ';
                } else {
                    std::cout << ", ";
                }
            }
            std::cout << std::endl;
        }
    }
    /// @brief Method size to chech the current size of the queue
    /// @return It return the size of the queue
    size_t size() const {
        return this->data.size();
    }
    /// @brief Method empty to check if there are existing data in the queue
    /// @return It returns a boolean value
    bool empty() const {
        return data.empty();
    }
};

#endif