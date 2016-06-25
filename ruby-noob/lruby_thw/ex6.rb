types_of_people = 10
x = "There are #{types_of_people} types of people."
binary = "binary"
do_not = "don't"
y = "Those who know #{binary} and those who #{do_not}."

puts x
puts y

puts "I said: #{x}."
puts "I also said: '#{y}'."

hilarious = false
joke_evaluation = "Isn't that joke so funny?! #{hilarious}"

puts joke_evaluation

w = "This is the left side of..."
e = "a string with a right side."

puts w + e

#In rubs " ( double quote ) tells Ruby to replace variable it finds with #{}. but ' (single quote)
#tells the ruby to leave the string alone and ignore any variables inside it

puts "It's a beautiful #{'day'}."
# prints => It's a beautiful day.
puts 'Its a beautiful #{day}.'
# prints => Its a beautiful #{day}.
