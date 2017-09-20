package main

import ("fmt"
        "math")

func golden_root_iteration(phi, eps float64) float64 {

     var tmp float64
         
         tmp = 0.0

         for math.Abs(phi - tmp) > eps {

             tmp = phi 

             phi = math.Sqrt(1 + phi)
         }

     return phi 
}


func golden_fractional_iteration(phi, eps float64) float64 {

     var tmp float64
         
         tmp = 0.0

         for math.Abs(phi - tmp) > eps {

             tmp = phi 

             phi = 1 + 1 / phi
         }

     return phi 
}

func golden_babylonial_iteration(phi, epsilon float64) float64 {
    tmp := 0.0

    for math.Abs(tmp-phi) > epsilon {
        tmp = phi
        phi = (phi * phi + 1) / (2 * phi - 1)
    }

    return phi
}

// Tip: Use seed = 2 to start with!
func FibonacciIteration(seed int, epsilon float64) float64 {

    denum := fibonacci(seed)
    num := fibonacci(seed + 1)

    phi := num / denum
    tmp := 0.0

    for math.Abs(tmp-phi) > epsilon {
        tmp = phi
        seed += 1
        denum = num
        num = fibonacci(seed)
        phi = num / denum
    }

    return phi
}

func fibonacci(n int) float64 {
    if n <= 2 { return 1 }
    return fibonacci(n - 1) + fibonacci(n - 2)
}

func main() {

    fmt.Println(golden_root_iteration(1, 1E-8))       
    fmt.Println(golden_fractional_iteration(1, 1E-8))       
    fmt.Println(golden_babylonial_iteration(1, 1E-8))       
    fmt.Println(FibonacciIteration(2, 1E-8))       
} 