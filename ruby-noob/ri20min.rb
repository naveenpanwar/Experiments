#!/usr/bin/env ruby
class MegaGreeter
  attr_accessor :names

  #create the objects
  def initialize(names="World!")
    @names = names
  end

  # say hi to everybody
  def say_hi
    if @names.nil?
      puts "..."
    elsif @names.respond_to?("each")
      # names is a list of some kind iterate
      @names.each do |name|
        puts "Hello #{name}!"
      end
    else
      puts "Hello #{@names}!"
    end
  end

  # say bye to everybody
  def say_bye
    if @names.nil?
      puts "..."
    elsif @names.respond_to?("join")
      # join the list elements with comma
      puts "Goodbye #{@names.join(', ')}, come back soon.!"
    else
      puts "Goodbye #{@names}, Come back soon."
    end
  end
end

if __FILE__==$0
  mg = MegaGreeter.new
  mg.say_hi
  mg.say_bye

  #Change name to Zeke
  mg.names = "Zeke"
  mg.say_hi
  mg.say_bye

  # Change the names to an array of names
  mg.names = ['naveen', 'panwar', 'ranjeet', 'ajit']
  mg.say_hi
  mg.say_bye

  # Change to nil
  mg.names = nil
  mg.say_hi
  mg.say_bye
end
