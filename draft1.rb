def count(n, m, a) 
    return ((n + a - 1) / a) * ((m + a - 1) / a)
end

n, m, a = gets.chomp.split.map(&:to_i)
puts count(n, m, a)