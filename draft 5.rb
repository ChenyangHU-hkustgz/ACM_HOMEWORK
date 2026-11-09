n = gets.to_i
nums = gets.chomp.split.map(&:to_i)

max_val = nums.max
max_pts = Array.new(max_val + 3, 0)
# Plus 3 to avoid leaking

nums.each do |x|
  max_pts[x] += x #Put the numbers into max_pts
end

dp = Array.new(max_val + 3, 0)
(1..max_val).each do |y|
  dp[y] = [dp[y - 1], dp[y - 2] + max_pts[y]].max
end

puts dp[max_val]