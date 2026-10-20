#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

#include "functions.h"

// TEST_CASE("calculateSales") {
//     std::ifstream fin{ "sales_data.txt" };

//     if (!fin) {
//         REQUIRE(false);
//     }
//     WeeklySales weekly_sales = calculateSales(fin);

//     REQUIRE_THAT(weekly_sales.combined, Catch::Matchers::WithinAbs(20892.60, 0.01));
//     REQUIRE_THAT(weekly_sales.maximum, Catch::Matchers::WithinAbs(4523.11, 0.01));
// }

// TEST_CASE("calculatePayments") {
//     std::ifstream fin { "sales_data.txt" };

//     if (!fin.good()) {
//         REQUIRE(false);
//     }

//     std::vector<SalesPerson>  sales_people = calculatePayments(fin);
//     std::vector<int>  real_payments = {323, 413, 652, 310, 98, 104, 0, 172, 210, 6 };

//     REQUIRE(real_payments.size() == sales_people.size());
//     for (auto i = 0; i < sales_people.size(); i++) {
//         REQUIRE(sales_people[i].payment == real_payments[i]);
//     }
// }