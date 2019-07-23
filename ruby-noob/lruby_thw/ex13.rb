first, second, third = ARGV

puts "Your first variable is: #{first}."
puts "Your second variable is: #{second}."
puts "Your third variable is: #{third}."

print "Give me some more:"
x = $stdin.gets.chomp

print "Please some more:"
y = $stdin.gets.chomp

puts "more more is #{x}, #{y}."
