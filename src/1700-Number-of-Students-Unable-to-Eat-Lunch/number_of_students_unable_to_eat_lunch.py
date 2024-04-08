from typing import List

class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        check: int = 0
        while True:
            if sandwiches[0] == students[0]:
                students.pop(0)
                sandwiches.pop(0)
                check = 0
            else:
                temp: int = students.pop(0)
                students.append(temp)
                check += 1

            if len(sandwiches) == 0:
                break
            elif check == len(sandwiches):
                break

        return len(students)
    
if __name__ == "__main__":
    students: List[int] = [1,1,0,0]
    sandwiches: List[int] = [0,1,0,1]
    solution = Solution()
    
    print(solution.countStudents(students, sandwiches))