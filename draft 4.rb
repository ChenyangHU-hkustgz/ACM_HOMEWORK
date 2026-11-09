n = gets.chomp.to_i
bills = [100, 20, 10, 5, 1]
count = 0

bills.each do |b|
    count += n / b
    n %= b
end

puts count