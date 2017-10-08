#ifndef _STACK_H_
#define _STACK_H_
namespace linuslan {
    template<typename T> class StackIterator;
    template<typename T> class Stack {
        friend class StackIterator<T>;
        private:
            enum {SIZE=100};
            T array[SIZE];
            int top;
        public:
            Stack():top(0) {
                array[0] = T();
            }
            void push(const T & t);
            T & pop();
            int size() const {
                return top;
            }
    };

    template<typename T> void Stack<T>::push(const T & t) {
        if(top < SIZE) {
            array[top++] = t;
        }
    }
    template<typename T> T & Stack<T>::pop() {
        if(top > 0) {
            return array[--top];
        } else {
            return array[0];
        }
    }

    template<typename T> class StackIterator {
        private:
            int index;
            Stack<T> & stack;
        public:
            StackIterator(Stack<T> & stack):stack(stack),index(0) {
            }
            T & operator ++ (int) { //此处的int并没有具体的作用，只是用来申明是后缀的++，如果不写int，则语法上会报错
                int ret = index;
                if(index < stack.top - 1) {
                    index ++;
                }
                return stack.array[ret];
            }
    };

}
#endif // _STACK_H_
