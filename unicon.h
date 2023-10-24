#ifndef UNICON_H
#define UNICON_H
/*TO REDUCE THE LENGTH OF FUNCTION NAME, SOME OF THE UNITS 
ARE WRITTEN IN SHORT FORMS*/
// DEFINED FUNCTIONS FOR CONVERSIONS
// CONVERSIONS OF KILOMETERS
double kilometers_to_meters(double number) {
    return number * 1000;
}
double kilometers_to_centimeters(double number) {
    return number * 100000;
}
double kilometers_to_millimeters(double number) {
    return number * 1000000;
}
double kilometers_to_miles(double number) {
    return number / 1.609;
}
double kilometers_to_yards(double number) {
    return number * 1093.61;
}
double kilometers_to_feet(double number) {
    return number * 3280.84;
}
double kilometers_to_inches(double number) {
    return number * 39370.1;
}
// CONVERSIONS OF METERS
double meters_to_kilometers(double number) {
    return number / 1000;
}
double meters_to_centimeters(double number) {
    return number * 100;
}
double meters_to_millimeters(double number) {
    return number * 1000;
}
double meters_to_miles(double number) {
    return number / 1609;
}
double meters_to_yards(double number) {
    return number * 1.09361;
}
double meters_to_feet(double number) {
    return number * 3.28084;
}
double meters_to_inches(double number) {
    return number * 39.3701;
}
// CONVERSIONS OF CENTIMETERS
double centimeters_to_kilometers(double number) {
    return number / 100000;
}
double centimeters_to_meters(double number) {
    return number / 100;
}
double centimeters_to_millimeters(double number) {
    return number * 10;
}
double centimeters_to_miles(double number) {
    return number / 160900;
}
double centimeters_to_yards(double number) {
    return number / 91.44;
}
double centimeters_to_feet(double number) {
    return number / 30.48;
}
double centimeters_to_inches(double number) {
    return number / 2.54;
}
// CONVERSIONS OF MILLIMETERS
double millimeters_to_kilometers(double number) {
    return number / 1000000;
}
double millimeters_to_meters(double number) {
    return number / 1000;
}
double millimeters_to_centimeters(double number) {
    return number / 10;
}
double millimeters_to_miles(double number) {
    return number / 1609344;
}
double millimeters_to_yards(double number) {
    return number / 914.4;
}
double millimeters_to_feet(double number) {
    return number / 304.8;
}
double millimeters_to_inches(double number) {
    return number / 25.4;
}
// CONVERSIONS OF MILES
double miles_to_kilometers(double number) {
    return number * 1.609;
}
double miles_to_meters(double number) {
    return number * 1609.34;
}
double miles_to_centimeters(double number) {
    return number * 160934;
}
double miles_to_millimeters(double number) {
    return number * 1609344;
}
double miles_to_yards(double number) {
    return number * 1760;
}
double miles_to_feet(double number) {
    return number * 5280;
}
double miles_to_inches(double number) {
    return number * 63360;
}
// CONVERSIONS OF YARDS
double yards_to_kilometers(double number) {
    return number / 1094;
}
double yards_to_meters(double number) {
    return number / 1.094;
}
double yards_to_centimeters(double number) {
    return number * 91.44;
}
double yards_to_millimeters(double number) {
    return number * 914.4;
}
double yards_to_miles(double number) {
    return number / 1760;
}
double yards_to_feet(double number) {
    return number * 3;
}
double yards_to_inches(double number) {
    return number * 36;
}
// CONVERSIONS OF FEET
double feet_to_kilometers(double number) {
    return number / 3281;
}
double feet_to_meters(double number) {
    return number / 3.281;
}
double feet_to_centimeters(double number) {
    return number * 30.48;
}
double feet_to_millimeters(double number) {
    return number * 304.8;
}
double feet_to_miles(double number) {
    return number / 5280;
}
double feet_to_yards(double number) {
    return number / 3;
}
double feet_to_inches(double number) {
    return number * 12;
}
// CONVERSIONS OF INCHES
double inches_to_kilometers(double number) {
    return number / 39370;
}
double inches_to_meters(double number) {
    return number / 39.37;
}
double inches_to_centimeters(double number) {
    return number * 2.54;
}
double inches_to_millimeters(double number) {
    return number * 25.4;
}
double inches_to_miles(double number) {
    return number / 63360;
}
double inches_to_yards(double number) {
    return number / 36;
}
double inches_to_feet(double number) {
    return number / 12;
}
// CONVERSIONS OF DEGREE CELSIUS
double celsius_to_fahrenheit(double number) {
    return (number * 1.8) + 32;
}
double celsius_to_kelvin(double number) {
    return number + 273.15;
}
// CONVERSIONS OF DEGREE FAHRENHEIT
double fahrenheit_to_celsius(double number) {
    return (number - 32) * 0.556;
}
double fahrenheit_to_kelvin(double number) {
    return (number - 32) * 0.556 + 273.15;
}
// CONVERSIONS OF KELVIN
double kelvin_to_celsius(double number) {
    return number - 273.15;
}
double kelvin_to_fahrenheit(double number) {
    return (number - 273.15) * 1.8 + 32;
}
// CONVERSIONS OF YEARS
double years_to_months(double number) {
    return number * 12;
}
double years_to_weeks(double number) {
    return number * 52.1429;
}
double years_to_days(double number) {
    return number * 365;
}
double years_to_hours(double number) {
    return number * 8760;
}
double years_to_minutes(double number) {
    return number * 525600;
}
double years_to_seconds(double number) {
    return number * 31556952;
}
double years_to_milliseconds(double number) {
    return number * 31556926000;
}
// CONVERSIONS OF MONTHS
double months_to_years(double number) {
    return number / 12;
}
double months_to_weeks(double number) {
    return number * 4.34524;
}
double months_to_days(double number) {
    return number * 30.4167;
}
double months_to_hours(double number) {
    return number * 730.001;
}
double months_to_minutes(double number) {
    return number * 43800;
}
double months_to_seconds(double number) {
    return number * 2629800;
}
double months_to_miliseconds(double number) {
    return number * 2629800000;
}
// CONVERSIONS OF WEEKS
double weeks_to_years(double number) {
    return number / 52.143;
}
double weeks_to_months(double number) {
    return number / 4.345;
}
double weeks_to_days(double number) {
    return number * 7;
}
double weeks_to_hours(double number) {
    return number * 168;
}
double weeks_to_minutes(double number) {
    return number * 10080;
}
double weeks_to_seconds(double number) {
    return number * 604800;
}
double weeks_to_milliseconds(double number) {
    return number * 604800000;
}
// CONVERSIONS OF DAYS
double days_to_years(double number) {
    return number / 365;
}
double days_to_months(double number) {
    return number / 30.417;
}
double days_to_weeks(double number) {
    return number / 7;
}
double days_to_hours(double number) {
    return number * 24;
}
double days_to_minutes(double number) {
    return number * 1440;
}
double days_to_seconds(double number) {
    return number * 86400;
}
double days_to_milliseconds(double number) {
    return number * 86400000;
}
// CONVERSIONS OF HOURS
double hours_to_years(double number) {
    return number / 8760;
}
double hours_to_months(double number) {
    return number / 730;
}
double hours_to_weeks(double number) {
    return number / 168;
}
double hours_to_days(double number) {
    return number / 24;
}
double hours_to_minutes(double number) {
    return number * 60;
}
double hours_to_seconds(double number) {
    return number * 3600;
}
double hours_to_milliseconds(double number) {
    return number * 3600000;
}
// CONVERSIONS OF MINUTES
double minutes_to_years(double number) {
    return number / 525600;
}
double minutes_to_months(double number) {
    return number / 43800;
}
double minutes_to_weeks(double number) {
    return number / 10080;
}
double minutes_to_days(double number) {
    return number / 1440;
}
double minutes_to_hours(double number) {
    return number / 60;
}
double minutes_to_seconds(double number) {
    return number * 60;
}
double minutes_to_milliseconds(double number) {
    return number * 60000;
}
// CONVERSIONS OF SECONDS
double seconds_to_years(double number) {
    return number / 31536000;
}
double seconds_to_months(double number) {
    return number / 2628002.88;
}
double seconds_to_weeks(double number) {
    return number / 604800;
}
double seconds_to_days(double number) {
    return number / 86400;
}
double seconds_to_hours(double number) {
    return number / 3600;
}
double seconds_to_minutes(double number) {
    return number / 60;
}
double seconds_to_milliseconds(double number) {
    return number * 1000;
}
// CONVERSIONS OF MILLISECONDS
double milliseconds_to_years(double number) {
    return number / 31556926000;
}
double milliseconds_to_months(double number) {
    return number / 2629800000;
}
double milliseconds_to_weeks(double number) {
    return number / 604800000;
}
double milliseconds_to_days(double number) {
    return number / 86400000;
}
double milliseconds_to_hours(double number) {
    return number / 3600000;
}
double milliseconds_to_minutes(double number) {
    return number / 60000;
}
double milliseconds_to_seconds(double number) {
    return number / 1000;
}
// CONVERSIONS OF PETABYTES
double petabytes_to_terabytes(double number) {
    return number * 1024;
}
double petabytes_to_gigabytes(double number) {
    return number * 1048576;
}
double petabytes_to_megabytes(double number) {
    return number * 1073741824;
}
double petabytes_to_kilobytes(double number) {
    return number * 1099511627776;
}
double petabytes_to_bytes(double number) {
    return number * 1125899906842580;;
}
double petabytes_to_bits(double number) {
    return number * 9007199254740640;
}
// CONVERSIONS OF TERABYTES
double terabytes_to_petabytes(double number) {
    return number / 1024;
}
double terabytes_to_gigabytes(double number) {
    return number * 1024;
}
double terabytes_to_megabytes(double number) {
    return number * 1048576;
}
double terabytes_to_kilobytes(double number) {
    return number * 1073741824;
}
double terabytes_to_bytes(double number) {
    return number * 1099511627776;
}
double terabytes_to_bits(double number) {
    return number * 8796093022208;
}
// CONVERSIONS OF GIGABYTES
double gigabytes_to_petabytes(double number) {
    return number / 1048576;
}
double gigabytes_to_terabytes(double number) {
    return number / 1024;
}
double gigabytes_to_megabytes(double number) {
    return number * 1024;
}
double gigabytes_to_kilobytes(double number) {
    return number * 1048576;
}
double gigabytes_to_bytes(double number) {
    return number * 1073741824;
}
double gigabytes_to_bits(double number) {
    return number * 8589934592;
}
// CONVERSIONS OF MEGABYTES
double megabytes_to_petabytes(double number) {
    return number / 1073741824;
}
double megabytes_to_terabytes(double number) {
    return number / 1048576;
}
double megabytes_to_gigabytes(double number) {
    return number / 1024;
}
double megabytes_to_kilobytes(double number) {
    return number * 1024;
}
double megabytes_to_bytes(double number) {
    return number * 1048576;
}
double megabytes_to_bits(double number) {
    return number * 8388608;
}
// CONVERSIONS OF KILOBYTES
double kilobytes_to_petabytes(double number) {
    return number / 1099511627776;
}
double kilobytes_to_terabytes(double number) {
    return number / 1073741824;
}
double kilobytes_to_gigabytes(double number) {
    return number / 1048576;
}
double kilobytes_to_megabytes(double number) {
    return number / 1024;
}
double kilobytes_to_bytes(double number) {
    return number * 1024;
}
double kilobytes_to_bits(double number) {
    return number * 8192;
}
// CONVERSIONS OF BYTES
double bytes_to_petabytes(double number) {
    return number / 1125899906842580;
}
double bytes_to_terabytes(double number) {
    return number / 1099511627776;
}
double bytes_to_gigabytes(double number) {
    return number / 1073741824;
}
double bytes_to_megabytes(double number) {
    return number / 1048576;
}
double bytes_to_kilobytes(double number) {
    return number / 1024;
}
double bytes_to_bits(double number) {
    return number * 8;
}
// CONVERSIONS OF BITS
double bits_to_petabytes(double number) {
    return number / 9007199254740640;
}
double bits_to_terabytes(double number) {
    return number / 8796093022208;
}
double bits_to_gigabytes(double number) {
    return number / 8589934592;
}
double bits_to_megabytes(double number) {
    return number / 8388608;
}
double bits_to_kilobytes(double number) {
    return number / 8192;
}
double bits_to_bytes(double number) {
    return number / 8;
}
// CONVERSIONS OF KILOMETERS PER HOUR
// KMPH = KILOMETERS PER HOUR
double kmph_to_mps(double number) { // MPS = METERS PER SECOND
    return number / 3.6;
}
double kmph_to_mph(double number) { // MPH = MILES PER HOUR
    return number / 1.609;
}
double kmph_to_knots(double number) {
    return number / 1.852;
}
double kmph_to_fps(double number) { // FPS = FEET PER SECOND
    return number / 1.097;
}
// CONVERSIONS OF METERS PER SECOND
// MPS = METERS PER SECOND
double mps_to_kmph(double number) { // KMPH = KILOMETERS PER HOUR
    return number * 3.6;
}
double mps_to_mph(double number) { // MPH = MILES PER HOUR
    return number * 2.23694;
}
double mps_to_knots(double number) {
    return number * 1.94384;
}
double mps_to_fps(double number) { // FPS = FEET PER SECOND
    return number * 3.28084;
}
// CONVERSIONS OF MILES PER HOUR
// MPH = MILES PER HOUR
double mph_to_kmph(double number) { // KMPH = KILOMETERS PER HOUR
    return number * 1.60934;
}
double mph_to_mps(double number) { // MPS = METERS PER SECOND
    return number / 2.237;
}
double mph_to_knots(double number) {
    return number / 1.151;
}
double mph_to_fps(double number) { // FPS = FEET PER SECOND
    return number * 1.46667;
}
// CONVERSION OF KNOTS
double knots_to_kmph(double number) { // KMPH = KILOMETERS PER HOUR
    return number * 1.852;
}
double knots_to_mps(double number) { // MPS = METERS PER SECOND
    return number / 1.944;
}
double knots_to_mph(double number) { // MPH = MILES PER HOUR
    return number * 1.15078;
}
double knots_to_fps(double number) { // FPS = FEET PER SECOND
    return number * 1.68781;
}
// CONVERSION OF FEET PER SECOND
// FPS = FEET PER SECOND
double fps_to_kmph(double number) { // KMPH = KILOMETERS PER HOUR
    return number * 1.09728;
}
double fps_to_mps(double number) { // MPS = METERS PER SECOND
    return number / 3.281;
}
double fps_to_mph(double number) { // MPH = MILES PER HOUR
    return number / 1.467; 
}
double fps_to_knots(double number) {
    return number / 1.688;
}
// CONVERSIONS OF GIGAHERTZ
double gigahertz_to_megahertz(double number) {
    return number * 1000;
}
double gigahertz_to_kilohertz(double number) {
    return number * 1000000;
}
double gigahertz_to_hertz(double number) {
    return number * 1000000000;
}
// CONVERSIONS OF MEGAHERTZ
double megahertz_to_gigahertz(double number) {
    return number / 1000;
} 
double megahertz_to_kilohertz(double number) {
    return number * 1000;
} 
double megahertz_to_hertz(double number) {
    return number * 1000000;
}
// CONVERSIONS OF KILOHERTZ
double kilohertz_to_gigahertz(double number) {
    return number / 1000000;
}
double kilohertz_to_megahertz(double number) {
    return number / 1000;
}
double kilohertz_to_hertz(double number) {
    return number * 1000;
}
// CONVERSIONS OF HERTZ
double hertz_to_gigahertz(double number) {
    return number / 1000000000;
}
double hertz_to_megahertz(double number) {
    return number / 1000000;
}
double hertz_to_kilohertz(double number) {
    return number / 1000;
}
// CONVERSIONS OF KILOPASCALS
double kilopascals_to_pascals(double number) {
    return number * 1000;
}
double kilopascals_to_atm(double number) { // ATM = STANDARD ATMOSPHERE
    return number / 101.3;
} 
double kilopascals_to_torrs(double number) {
    return number * 7.501;
} 
double kilopascals_to_bars(double number) {
    return number / 100;
} 
double kilopascals_to_ppsi(double number) { // PPSI = POUNDS PER SQUARE INCH
    return number / 6.895;
} 
double kilopascals_to_mmhg(double number) { // MMHG = MILLIMETERS OF MERCURY
    return number * 7.501;
}
double kilopascals_to_inches_of_hg(double number) {
    return number / 3.386;
}
// CONVERSIONS OF PASCALS
double pascals_to_kilopascals(double number) {
    return number / 1000;
}
double pascals_to_atm(double number) { // ATM = STANDARD ATMOSPHERE
    return number / 101300;
}
double pascals_to_torrs(double number) {
    return number / 133.3;
}
double pascals_to_bars(double number) {
    return number / 100000;
}
double pascals_to_ppsi(double number) { // PPSI = POUNDS PER SQUARE INCH
    return number / 6895;
}
double pascals_to_mmhg(double number) { // MMHG = MILLIMETERS OF MERCURY
    return number / 133.3;
}
double pascals_to_inches_of_hg(double number) {
    return number / 3386;
}
// CONVERSIONS OF STANDARD ATMOSPHERE
// ATM = STANDARD ATMOSPHERE
double atm_to_pascals(double number) {
    return number * 101300;
}
double atm_to_kilopascals(double number) {
    return number * 101.3;
}
double atm_to_torrs(double number) {
    return number * 760;
} 
double atm_to_bars(double number) {
    return number * 1.013;
} 
double atm_to_ppsi(double number) { // PPSI = POUNDS PER SQUARE INCH
    return number * 14.6959;
} 
double atm_to_mmhg(double number) { // MMHG = MILLIMETERS OF MERCURY
    return number * 760;
}
double atm_to_inches_of_hg(double number) {
    return number * 29.9213;
}
// CONVERSIONS OF TORRS
double torrs_to_pascals(double number) {
    return number * 133.322;
}
double torrs_to_kilopascals(double number) {
    return number / 7.501;
}
double torrs_to_atm(double number) { // ATM = STANDARD ATMOSPHERE
    return number / 760;
}
double torrs_to_bars(double number) {
    return number / 750.1;
}
double torrs_to_ppsi(double number) { // PPSI = POUNDS PER SQUARE INCH
    return number / 51.715;
}
double torrs_to_mmhg(double number) { // MMHG = MILLIMETERS OF MERCURY
    return number * 1;
}
double torrs_to_inches_of_hg(double number) {
    return number / 25.4;
}
// CONVERSIONS OF BARS
double bars_to_pascals(double number) {
    return number * 100000;
}
double bars_to_kilopascals(double number) {
    return number * 100;
}
double bars_to_atm(double number) { // ATM = STANDARD ATMOSPHERE
    return number / 1.013;
}
double bars_to_torrs(double number) {
    return number * 750.062;
}
double bars_to_ppsi(double number) { // PPSI = POUNDS PER SQUARE INCH
    return number * 14.5038;
}
double bars_to_mmhg(double number) { // MMHG = MILLIMETERS OF MERCURY
    return number * 750.062;
}
double bars_to_inches_of_hg(double number) {
    return number * 29.53;
}
// CONVERSIONS OF POUNDS PER SQUARE INCH
// PPSI = POUNDS PER SQUARE INCH
double ppsi_to_pascals(double number) {
    return number * 6894.76;
}
double ppsi_to_kilopascals(double number) {
    return number * 6.89476;
}
double ppsi_to_atm(double number) { // ATM = STANDARD ATMOSPHERE
    return number / 14.696;
}
double ppsi_to_torrs(double number) {
    return number * 51.7149;
}
double ppsi_to_bars(double number) {
    return number / 14.504;
}
double ppsi_to_mmhg(double number) { // MMHG = MILLIMETERS OF MERCURY
    return number * 51.7149;
}
double ppsi_to_inches_of_hg(double number) {
    return number * 2.03602;
}
// CONVERSIONS OF MILLIMETERS OF MERCURY
// MMHG = MILLIMETERS OF MERCURY
double mmhg_to_pascals(double number) {
    return number * 133.322;
}
double mmhg_to_kilopascals(double number) {
    return number / 7.501;
}
double mmhg_to_atm(double number) { // ATM = STANDARD ATMOSPHERE
    return number / 760;
}
double mmhg_to_torrs(double number) {
    return number * 1;
}
double mmhg_to_bars(double number) {
    return number / 750.1;
}
double mmhg_to_ppsi(double number) { // PPSI = POUNDS PER SQUARE INCH
    return number / 51.715;
}
double mmhg_to_inches_of_hg(double number) {
    return number / 25.4;
}
// CONVERSIONS OF INCHES OF MERCURY
double inches_of_hg_to_pascals(double number) {
    return number * 3386.39;
}
double inches_of_hg_to_kilopascals(double number) {
    return number * 3.38639;
}
double inches_of_hg_to_atm(double number) { // ATM = STANDARD ATMOSPHERE
    return number / 29.921;
}
double inches_of_hg_to_torrs(double number) {
    return number * 25.4;
}
double inches_of_hg_to_bars(double number) {
    return number / 29.53;
}
double inches_of_hg_to_ppsi(double number) { // PPSI = POUNDS PER SQUARE INCH
    return number / 2.036;
}
double inches_of_hg_to_mmhg(double number) { // MMHG = MILLIMETERS OF MERCURY
    return number * 25.4;
}
// CONVERSIONS OF SQUARE KILOMETERS
// SQKM = SQUARE KILOMETERS
double sqkm_to_sqm(double number) { // SQM = SQUARE METERS
    return number * 1000000;
}
double sqkm_to_sqmi(double number) { // SQMI = SQUARE MILES
    return number / 2.59;
}
double sqkm_to_sqy(double number) { // SQY = SQUARE YARDS
    return number * 1195990.046301;
}
double sqkm_to_sqf(double number) { // SQF = SQUARE FEET
    return number * 10763910.41671;
}
double sqkm_to_hectares(double number) {
    return number * 100;
}
double sqkm_to_acres(double number) {
    return number * 247.105;
}
// CONVERSIONS OF SQUARE METERS
// SQM = SQUARE METERS
double sqm_to_sqkm(double number) { // SQKM = SQUARE KILOMETERS
    return number / 1000000;
}
double sqm_to_sqmi(double number) { // SQMI = SQUARE MILES
    return number / 2589988.10;
}
double sqm_to_sqy(double number) { // SQY = SQUARE YARDS
    return number * 1.196;
}
double sqm_to_sqf(double number) { // SQF = SQUARE FEET
    return number * 10.7639;
}
double sqm_to_hectares(double number) {
    return number / 10000;
}
double sqm_to_acres(double number) {
    return number / 4047;
}
// CONVERSIONS OF SQUARE MILES
// SQMI = SQUARE MILES
double sqmi_to_sqkm(double number) { // SQKM = SQUARE KILOMETERS
    return number * 2.59;
}
double sqmi_to_sqm(double number) { // SQM = SQUARE METERS
    return number * 2589988.10;
}
double sqmi_to_sqy(double number) { // SQY = SQUARE YARDS
    return number * 3097599.999598;
}
double sqmi_to_sqf(double number) { // SQF = SQUARE FEET
    return number * 27878400;
}
double sqmi_to_hectares(double number) {
    return number * 259;
}
double sqmi_to_acres(double number) {
    return number * 640;
} 
// CONVERSIONS OF SQUARE YARDS
// SQY = SQUARE YARDS
double sqy_to_sqkm(double number) { // SQKM = SQUARE KILOMETERS
    return number / 1195990.0463;
}
double sqy_to_sqm(double number) { // SQM = SQUARE METERS
    return number / 1.196;
}
double sqy_to_sqmi(double sqy) { // SQMI = SQUARE MILES
    return sqy / 3097602.26;
}
double sqy_to_sqf(double number) { // SQY = SQUARE FEET
    return number * 9;
}
double sqy_to_hectares(double number) {
    return number / 11960;
}
double sqy_to_acres(double number) {
    return number / 4840;
}
// CONVERSIONS OF SQUARE FEET
// SQF = SQUARE FEET
double sqf_to_sqkm(double number) { // SQKM = SQUARE KILOMETERS
    return number / 10763910.41671;
}
double sqf_to_sqm(double number) { // SQM = SQUARE METERS
    return number / 10.764;
}
double sqf_to_sqmi(double number) { // SQMI = SQUARE MILES
    return number / 27878400;
}
double sqf_to_sqy(double number) { // SQY = SQUARE YARDS
    return number / 9;
}
double sqf_to_hectares(double number) {
    return number / 107600;
}
double sqf_to_acres(double number) {
    return number / 43560;
}
// CONVERSIONS OF HECTARES
double hectares_to_sqkm(double number) { // SQKM = SQUARE KILOMETERS
    return number / 100;
}
double hectares_to_sqm(double number) { // SQM = SQUARE METERS
    return number * 10000;
}
double hectares_to_sqmi(double number) { // SQMI = SQUARE MILES
    return number / 259;
}
double hectares_to_sqy(double number) { // SQY = SQUARE YARDS 
    return number * 11960;
}
double hectares_to_sqf(double number) { // SQF = SQUARE FEET
    return number * 107369;
}
double hectares_to_acres(double number) {
    return number * 2.471;
}
// CONVERSIONS OF ACRES
double acres_to_sqkm(double number) { // SQKM = SQUARE KILOMETERS
    return number / 247.1;    
}
double acres_to_sqm(double number) { // SQM = SQUARE METERS
    return number * 4047;
}
double acres_to_sqmi(double number) { // SQMI = SQUARE MILES
    return number / 640;
}
double acres_to_sqy(double number) { // SQY = SQUARE YARDS
    return number * 4840;
}
double acres_to_sqf(double number) { // SQF = SQUARE FEET
    return number * 43560;
}
double acres_to_hectares(double number) {
    return number / 2.471;
}
// CONVERSIONS OF KILOGRAMS
double kilograms_to_grams(double number) {
    return number * 1000;
}
double kilograms_to_milligrams(double number) {
    return number * 1000000;
}
double kilograms_to_tons(double number) {
    return number / 907.2;
}
double kilograms_to_metric_tons(double number) {
    return number / 1000;
}
double kilograms_to_pounds(double number) {
    return number * 2.205;
}
double kilograms_to_ounces(double number) {
    return number * 35.274;
}
// CONVERSIONS OF GRAMS
double grams_to_kilograms(double number) {
    return number / 1000;  
}
double grams_to_milligrams(double number) {
    return number * 1000;
}
double grams_to_tons(double number) {
    return number / 907200;
}
double grams_to_metric_tons(double number) {
    return number / 1000000;
}
double grams_to_pounds(double number) {
    return number / 453.6;
}
double grams_to_ounces(double number) {
    return number / 28.35;
}
// CONVERSIONS OF MILLIGRAMS
double milligrams_to_kilograms(double number) {
    return number / 1000000;
}
double milligrams_to_grams(double number) {
    return number / 1000;
}
double milligrams_to_tons(double number) {
    return number / 907184740;
}
double milligrams_to_metric_tons(double number) {
    return number / 1000000000;
}
double milligrams_to_pounds(double number) {
    return number / 4536000;
}
double milligrams_to_ounces(double number) {
    return number / 28350;
}
// CONVERSIONS OF TONS
double tons_to_kilograms(double number) {
    return number * 907.2;
}
double tons_to_grams(double number) {
    return number * 907200;
}
double tons_to_milligrams(double number) {
    return number * 907184740;
}
double tons_to_metric_tons(double number) {
    return number / 1.102;
}
double tons_to_pounds(double number) {
    return number * 2000;
}
double tons_to_ounces(double number) {
    return number * 32000;
}
// CONVERSIONS OF METRIC TONS
double metric_tons_to_kilograms(double number) {
    return number * 1000;
}
double metric_tons_to_grams(double number) {
    return number * 1000000;
}
double metric_tons_to_milligrams(double number) {
    return number * 1000000000;
}
double metric_tons_to_tons(double number) {
    return number * 1.102;
}
double metric_tons_to_pounds(double number) {
    return number * 2204.62;
}
double metric_tons_to_ounces(double number) {
    return number * 35274;
}
// CONVERSIONS OF POUNDS
double pounds_to_kilograms(double number) {
    return number / 2.205;
}
double pounds_to_grams(double number) {
    return number * 453.6;
}
double pounds_to_milligrams(double number) {
    return number * 453592;
}
double pounds_to_tons(double number) {
    return number / 2000;
}
double pounds_to_metric_tons(double number) {
    return number / 2205;
}
double pounds_to_ounces(double number) {
    return number * 16;
}
// CONVERSIONS OF OUNCES
double ounces_to_kilograms(double ounces) {
    return ounces / 35.274;
}
double ounces_to_grams(double ounces) {
    return ounces * 28.3495;
}
double ounces_to_milligrams(double ounces) {
    return ounces * 28349.5;
}
double ounces_to_tons(double ounces) {
    return ounces / 32000;
}
double ounces_to_metric_tons(double ounces) {
    return ounces / 35270;
}
double ounces_to_pounds(double ounces) {
    return ounces / 16;
}
#endif
