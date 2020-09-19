#include "unity.h"
#include "function.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_triangle_area(void)
{
  TEST_ASSERT_EQUAL(1, triangle_area(1,2));
  TEST_ASSERT_EQUAL(4, triangle_area(2,4));
  TEST_ASSERT_EQUAL(0, triangle_area(-5));
}



void test_Eqilateral(void)
{
  TEST_ASSERT_EQUAL(0, Eqilateral(1,2,3));
  TEST_ASSERT_EQUAL(1, Eqilateral(2,2,2));
  TEST_ASSERT_EQUAL(0, Eqilateral(-5,3,4));
}

void test_rightangled(void)
{
  TEST_ASSERT_EQUAL(1, rightangled(4,5,3));
  TEST_ASSERT_EQUAL(0, rightangled(2,2,2));
   TEST_ASSERT_EQUAL(0, rightangled(-5,3,4));
}

void test_isosceles(void)
{
  TEST_ASSERT_EQUAL(1, isosceles(5,5,3));
  TEST_ASSERT_EQUAL(0, isosceles(2,4,1));
  TEST_ASSERT_EQUAL(0, isosceles(-5,3,4));
}

void test_scalene(void)
{
  TEST_ASSERT_EQUAL(1, scalene(5,1,3));
  TEST_ASSERT_EQUAL(0, scalene(2,4,2));
  TEST_ASSERT_EQUAL(0, scalene(-5,3,4));
}

void test_triangle_perimeter(void)
{
  TEST_ASSERT_EQUAL(13, triangle_perimeter(5,5,3));
  TEST_ASSERT_EQUAL(0, triangle_perimeter(-5,3,4));
}

void test_quadrilateral_perimeter(void)
{
  TEST_ASSERT_EQUAL(18, quadrilateral_perimeter(5,5,3,5));
  TEST_ASSERT_EQUAL(0, quadrilateral_perimeter(-5,3,4,1));
}

void test_rectangle_area(void)
{
  TEST_ASSERT_EQUAL(15, rectangle_area(5,3));
  TEST_ASSERT_EQUAL(0, rectangle_area(-5,3));
}

void test_square_area(void)
{
  TEST_ASSERT_EQUAL(25, square_area(5));
  TEST_ASSERT_EQUAL(0, square_area(-5));
}

void test_square(void)
{
  TEST_ASSERT_EQUAL(1, square(3,3,3,3,1.73,1.73));
  TEST_ASSERT_EQUAL(0, square(3,3,3,3,1.73,2.73));
  TEST_ASSERT_EQUAL(0, square(-5));
}

void test_rhombus_area(void)
{
  TEST_ASSERT_EQUAL(10, rhombus_area(5,4));
  TEST_ASSERT_EQUAL(0, rhombus_area(-5,3));
}

void test_rhombus(void)
{
  TEST_ASSERT_EQUAL(10, rhombus(5,5,5,5));
  TEST_ASSERT_EQUAL(0, rhombus(5,3,3,4));
  TEST_ASSERT_EQUAL(0, rhombus(-5,3,3,4));
}

void test_quadrilateral_area(void)
{
  TEST_ASSERT_EQUAL(20, quadrilateral_area(5,4,5,4,1.57,1.57));
  TEST_ASSERT_EQUAL(0, quadrilateral_area(-5,3,3,4,1.57,1.57));
}

void test_circle_area(void)
{
  TEST_ASSERT_EQUAL(154, circle_area(7));
  TEST_ASSERT_EQUAL(0, circle_area(-5));
}

void test_circle_circumference(void)
{
  TEST_ASSERT_EQUAL(44, circle_circumference(7));
  TEST_ASSERT_EQUAL(0, circle_circumference(-5));
}

void test_rightcylinder_area(void)
{
  TEST_ASSERT_EQUAL(527, rightcylinder_area(7,5));
  TEST_ASSERT_EQUAL(0, rightcylinder_area(-5,3));
}

void test_rightcylinder_volume(void)
{
  TEST_ASSERT_EQUAL(769, rightcylinder_volume(7,5));
  TEST_ASSERT_EQUAL(0, rightcylinder_volume(-5,3));
}

void test_sphere_area(void)
{
  TEST_ASSERT_EQUAL(615, sphere_area(7));
  TEST_ASSERT_EQUAL(0, sphere_area(-5));
}

void test_sphere_volume(void)
{
  TEST_ASSERT_EQUAL(268, sphere_volume(4));
  TEST_ASSERT_EQUAL(0, sphere_volume(-5));
}


void test_Rightcircularcone_area(void)
{
  TEST_ASSERT_EQUAL(130,  Rightcircularcone_area(4,5));
  TEST_ASSERT_EQUAL(0,  Rightcircularcone_area(-5,6));
}

void test_Rightcircularcone_volume(void)
{
  TEST_ASSERT_EQUAL(83,  Rightcircularcone_volume(4,5));
  TEST_ASSERT_EQUAL(0,  Rightcircularcone_volume(-5,6));
}

void test_cube_TSA(void)
{
  TEST_ASSERT_EQUAL(150,  cube_TSA(5));
  TEST_ASSERT_EQUAL(0,  cube_TSA(-5));
}

void test_cube_LSA(void)
{
  TEST_ASSERT_EQUAL(100,  cube_LSA(5));
  TEST_ASSERT_EQUAL(0,  cube_LSA(-5));
}

void test_cube_volume(void)
{
  TEST_ASSERT_EQUAL(125,  cube_volume(5));
  TEST_ASSERT_EQUAL(0,  cube_volume(-5));
}

void test_cube_diagonal(void)
{
  TEST_ASSERT_EQUAL(8,  cube_diagonal(5));
  TEST_ASSERT_EQUAL(0,  cube_diagonal(-5));
}

void test_cube_perimeter(void)
{
  TEST_ASSERT_EQUAL(12,  cube_perimeter(5));
  TEST_ASSERT_EQUAL(0,  cube_perimeter(-5));
}

void test_cuboid_TSA(void)
{
  TEST_ASSERT_EQUAL(94,  cuboid_TSA(5,4,3));
  TEST_ASSERT_EQUAL(0,  cuboid_TSA(-5,4,3));
}

void test_cuboid_LSA(void)
{
  TEST_ASSERT_EQUAL(54,  cuboid_LSA(5,4,3));
  TEST_ASSERT_EQUAL(0,  cuboid_LSA(-5,4,3));
}

void test_cuboid_volume(void)
{
  TEST_ASSERT_EQUAL(60,  cuboid_volume(5,4,3));
  TEST_ASSERT_EQUAL(0,  cuboid_volume(-5,4,3));
}

void test_cuboid_diagonal(void)
{
  TEST_ASSERT_EQUAL(7,  cuboid_diagonal(5,4,3));
  TEST_ASSERT_EQUAL(0,  cuboid_diagonal(-5,4,3));
}

void test_cuboid_perimeter(void)
{
  TEST_ASSERT_EQUAL(48,  cuboid_perimeter(5,4,3));
  TEST_ASSERT_EQUAL(0,  cuboid_perimeter(-5,4,3));
}

void test_triangularprism_volume(void)
{
  TEST_ASSERT_EQUAL(30,  triangularprism_volume(5,4,3));
  TEST_ASSERT_EQUAL(0,  triangularprism_volume(-5,4,3));
}

void test_triangularprism_area(void)
{
  TEST_ASSERT_EQUAL(56,  triangularprism_area(5,4,3));
  TEST_ASSERT_EQUAL(0,  triangularprism_area(-5,4,3));
}










int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
RUN_TEST(test_triangle_area);
RUN_TEST(test_Eqilateral);
RUN_TEST(test_rightangled);
RUN_TEST(test_isosceles);
RUN_TEST(test_scalene);
RUN_TEST(test_triangle_perimeter);
RUN_TEST(test_quadrilateral_perimeter);
RUN_TEST(test_rectangle_area);
RUN_TEST(test_square_area);
RUN_TEST(test_square);
RUN_TEST(test_rhombus_area);
RUN_TEST(test_rhombus);
RUN_TEST(test_quadrilateral_area);
RUN_TEST(test_circle_area);
RUN_TEST(test_circle_circumference);
RUN_TEST(test_rightcylinder_area);
RUN_TEST(test_rightcylinder_volume);
RUN_TEST(test_sphere_area);
RUN_TEST(test_sphere_volume);
RUN_TEST(test_Rightcircularcone_area);
RUN_TEST(test_Rightcircularcone_volume);
RUN_TEST(test_cube_TSA);
RUN_TEST(test_cube_LSA);
RUN_TEST(test_cube_volume);
RUN_TEST(test_cube_diagonal);
RUN_TEST(test_cube_perimeter);
RUN_TEST(test_cuboid_TSA);
RUN_TEST(test_cuboid_LSA);
RUN_TEST(test_cuboid_volume);
RUN_TEST(test_cuboid_diagonal);
RUN_TEST(test_cuboid_perimeter);
RUN_TEST(test_triangularprism_volume);
RUN_TEST(test_triangularprism_area);




  /* Close the Unity Test Framework */
  return UNITY_END();
}




