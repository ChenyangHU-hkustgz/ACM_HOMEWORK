# frozen_string_literal: true
open = true
while line = gets
  line.each_char do |c|
    if c == '"'
      print open ? "``" : "''"
      open = !open
    else
      print c
    end
  end
end



