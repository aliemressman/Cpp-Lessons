class Students : public Human {
    private:
        int studentsNo;
    public:
        Students(int studentsNo, string name, string lastName, int age) : Human(name,lastName,age){
            this -> studentsNo = studentsNo;
        }
        int getStudentsNo() {
            return studentsNo;
        }
};