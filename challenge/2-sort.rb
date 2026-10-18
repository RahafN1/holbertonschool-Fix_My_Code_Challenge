#!/usr/bin/ruby

result = []

ARGV.each do |arg|
  # skip arguments that are not integers
  next unless arg =~ /\A-?\d+\z/

  # convert to integer
  i_arg = arg.to_i

  # find the right position to keep the list sorted (ascending)
  i = 0
  i += 1 while i < result.size && result[i] < i_arg

  result.insert(i, i_arg)
end

puts result
