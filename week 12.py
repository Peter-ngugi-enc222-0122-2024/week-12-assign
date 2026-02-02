# Student class
class Student:
    def __init__(self, name, reg_no):
        self.name = name
        self.reg_no = reg_no

    def get_details(self):
        return self.name, self.reg_no


# Course class
class Course:
    def __init__(self, course_name, course_code):
        self.course_name = course_name
        self.course_code = course_code

    def get_details(self):
        return self.course_name, self.course_code


# Registration class (Dependency)
class Registration:
    def register_student(self, student, course):
        print("=== REGISTRATION DETAILS ===")
        print(f"Student Name : {student.name}")
        print(f"Reg Number   : {student.reg_no}")
        print(f"Course       : {course.course_name}")
        print(f"Course Code  : {course.course_code}")
        print("Registration Successful!")


# Main program
if __name__ == "__main__":
    s1 = Student("frankline kibet", 1023)
    c1 = Course("Object Oriented Programming", "CSC210")

    reg = Registration()
    reg.register_student(s1, c1)
