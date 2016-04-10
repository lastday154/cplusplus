# Enter your code here. Read input from STDIN. Print output to STDOUT
series = Array.new(100){0}  
series[1], series[2], index = gets().split(" ").map{|x|x.to_i}  
(3..100).each do |num|  
    series[num] = series[num-1]**2 + series[num-2]    
end  
puts series[index]  