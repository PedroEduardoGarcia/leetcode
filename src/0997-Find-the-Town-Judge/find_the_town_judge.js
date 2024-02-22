/**
 * @param {number} n
 * @param {number[][]} trust
 * @return {number}
 */
var findJudge = function(n, trust) {
  let in_degree = Array.from({ length: n }, () => 0)
  let out_degree = Array.from({ length: n }, () => 0)
  let ans = []

  for (let i = 0; i < trust.length; i++) {
    let t = trust[i];
    out_degree[t[0] - 1] += 1
    in_degree[t[1] - 1] += 1
  }

  for (let i = 0; i < in_degree.length; i++) {
    if (in_degree[i] == n - 1) {
      if (out_degree[i] == 0) {
        ans.push(i + 1)
      }
    }
  }
  
  return (ans.length === 1) ? ans[0] : -1;
};

n = 3
trust = [[1,3],[2,3],[3,1]]

console.log(findJudge(n, trust))