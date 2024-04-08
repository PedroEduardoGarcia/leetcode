/**
 * @param {number[]} students
 * @param {number[]} sandwiches
 * @return {number}
 */
var countStudents = function(students, sandwiches) {
  let check = 0

  while (true) {
    if (sandwiches[0] === students[0]) {
      students.shift()
      sandwiches.shift()
      check = 0
  } else {
      let temp = students.shift();
      students.push(temp)
      check += 1
  }

  if (sandwiches.length === 0) {
      break
  } else if (check === sandwiches.length) {
      break
    }
  }
  return students.length
};

let students = [1, 1, 0, 0];
let sandwiches = [0, 1, 0, 1];

console.log(countStudents(students, sandwiches))
