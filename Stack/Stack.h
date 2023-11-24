#ifndef STACK_H_
#define STACK_H_
#include<iostream>
#include<vector>

/// @brief Template class Stack
/// @tparam T parameter to work with various data types
template<class T>
class Stack{
private:
    // Private vector data to store all the elements to be push in the Stack
    std::vector<T> data;
public:
    // Default constructor
    Stack() = default;
    /// @brief Push method to add element in the Stack
    /// @param data is the element to be pushed in the Stack
    void push(const T& data){
        this->data.push_back(data);
    }
    /// @brief Pop method to remove the last element in the Stack
    /// @return it returns the popped value
    T pop(){
        if(!this->data.empty()){
            T data = this->data.back();
            this->data.pop_back();
            return data;
        }
        return T();
    }
    /// @brief Peek method to retrieve the last element in the Stack
    /// @return it returns the last element in the Stack
    T peek() const {
        if(!this->data.empty()){
            return this->data.back();
        }
        return T();
    }
    /// @brief Empty method to check if the Stack is empty or not
    /// @return It returns a boolean value
    bool empty() const {
        return this->data.empty();
    }
    /// @brief Print method to print all the existing element in the Stack
    void print(){
        if(!this->data.empty()){
            for(size_t i = 0; i < this->data.size(); ++i){
                std::cout << this->data.at(i);
                if(i == this->data.size() - 1){
                    std::cout << ' ';
                } else {
                    std::cout << ", ";
                }
            }
        }
        std::cout << std::endl;
    }
    /// @brief Size method to retrieve the current size of the Stack
    /// @return It returns the current size of the Stack
    size_t size() const {
        return this->data.size();
    }
};

#endif