def find_different(nums)
  odd = []
  even = []

  nums.each_with_index {|x, i| (x.odd? ? odd : even) << i + 1}
  (even.length == 1? even : odd).first

end

n = gets.to_i
arr = gets.chomp.split.map(&:to_i)

puts find_different(arr)
