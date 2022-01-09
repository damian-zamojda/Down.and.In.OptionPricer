# Down.and.In.OptionPricer

R package - MonteCarlo estimation of Down and In Barrier Option

Functions provide an estimate of the price of a function depending on the declared parameters, in particular with default levels:

- Number of Monte Carlo time intervals: nInt_ = 100L,
- Strike price: Strike_ = 50,
- price of the option at the moment of pricing: Spot_ = 45,
- Annualized volatility rate Vol_(σ) = 0.25,
- Annualized risk-free rate r_ = 0.04
- Time to maturity: Expiry_ = 0.5
- Barrier level: barrier_ = 55.

Algorithm estimates Monte Carlo approximation of the option theoretical price 10.000 times and returns discounted average value based on the assumed parameters mentioned above.

### Below is a proposed method of installing the package and an example of its use.

#### Install necessary packages

```
library('devtools')
library('tidyverse')
```

#### Install project package which returns estimation of Down and In Option prices

```
devtools::install_github("https://github.com/damian-zamojda/Down.and.In.OptionPricer.git")
library('Down.and.In.OptionPricer')
```

#### Estimation of price with default parameters

#### Function for Call or Put Option
- `Down.and.In.OptionPricer::CallDownAndInPrice()`
- `Down.and.In.OptionPricer::PutDownAndInPrice()`
