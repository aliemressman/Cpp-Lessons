class Human {
    protected:
        string name;
        string lastName;
        int age;
    public:
        void setName(string name) {
            this -> name = name;
        }
        void setLastName(string lastName) {
            this -> lastName = lastName;
        }
        void setAge(int age) {
            this -> age = age;
        }
        string getName() {
            return name;
        }
        string getLastName() {
            return lastName;
        }
        int getAge() {
            return age;
        }

        Human(string name, string lastName, int age) {
            this -> name = name;
            this -> lastName = lastName;
            this -> age = age;
        }
};