#ifndef _EXAMPLE_H_
#define _EXAMPLE_H_

#include <iostream>
using namespace std;
namespace linuslan {
    template<typename T> class Example {
        private:
            T val;
        public:
            Example(T val):val(val) {
            }
            ~Example() {
            }
            void set(T val) {
                this->val = val;
            }
            T get() const {
                return this->val;
            }
    };

    class Test {
        /*
        private:
            Test(const Test &); //�������캯��
            Test & operator=(const Test &); //��ֵ���������
        */
        public:
            Test() {};
            ~Test() {};
    };
}

#endif // _EXAMPLE_H_
