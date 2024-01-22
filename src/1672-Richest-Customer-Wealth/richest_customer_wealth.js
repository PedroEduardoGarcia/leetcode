/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function(accounts) {
  var max_wealth = 0
  accounts.forEach((customer) => {
      customer_wealth = 0
      customer.forEach((bank) => {
          customer_wealth += bank
      })
      max_wealth = Math.max(max_wealth, customer_wealth)
  })
  return max_wealth
};

accounts = [[1,2,3],[3,2,1]]
console.log(maximumWealth(accounts))