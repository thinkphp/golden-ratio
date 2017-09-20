#
# Golden Ratio
# Two quantities are in the golden ratio, if their ratio is the same as the ratio of their sum to the larger of the two quantities.
# a+b/a = a / b = phi(1.6180339887...)
#

def golden_ratio_root_iteration(phi = 1.0, eps = 1E-8)

    tmp = 0.0   

    while (phi - tmp).abs > eps

          tmp = phi

          phi = Math.sqrt( 1 + phi )
    end
  
    phi
end

def golden_ratio_fractional_iteration(phi = 1.0, eps = 1E-8)

    tmp = 0.0   

    while (phi - tmp).abs > eps

          tmp = phi

          phi = 1 + (1 / phi)
    end
  
    phi
end

def golden_ratio_fibonacci_iteration(seed = 2.0, eps=1E-8)

    denum = fibonacci(seed)

    num = fibonacci(seed + 1)

    phi = num / denum

    tmp = 0.0

    while (phi - tmp).abs > eps

        tmp = phi

        seed += 1

        denum = num

        num = fibonacci(seed)

        phi = num / denum

    end
  
    phi
end

def fibonacci(n)

    if n < 2 
       n 
    else
       fibonacci( n - 1) + fibonacci(n - 2)
    end

end

p golden_ratio_root_iteration
p golden_ratio_fractional_iteration
p golden_ratio_fibonacci_iteration