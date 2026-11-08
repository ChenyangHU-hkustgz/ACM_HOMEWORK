a = gets.chomp
b = gets.chomp

ori = a.to_i + b.to_i

a_t = a.delete("0").to_i
b_t = b.delete("0").to_i

tra = ori.to_s.delete("0").to_i

puts a_t + b_t == tra ?  "YES" : "NO"