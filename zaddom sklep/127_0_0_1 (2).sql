-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Apr 13, 2025 at 05:25 PM
-- Wersja serwera: 10.4.32-MariaDB
-- Wersja PHP: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `shopdb`
--
CREATE DATABASE IF NOT EXISTS `shopdb` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `shopdb`;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `products`
--

CREATE TABLE `products` (
  `id` int(11) NOT NULL,
  `name` varchar(255) NOT NULL,
  `img` varchar(255) NOT NULL,
  `cat` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `products`
--

INSERT INTO `products` (`id`, `name`, `img`, `cat`) VALUES
(1, '\r\nJORDAN SPIZIKE LOW', 'https://sklep.sizeer.com/api/images/offer-1052181324/seo/gallery/thumbnails/images/47/4774722/m8776583277303e25517309b6284041ce_520705_z_1.jpg', 'kat1'),
(2, 'NIKE AIR FORCE 1 \'07', 'https://sklep.sizeer.com/api/images/offer-978784572/seo/gallery/thumbnails/images/20/2028492/me515a9d2820d11fe8bbd7d2251c22558_454205_z_1.jpg', 'kat1'),
(3, '\r\nAIR JORDAN 1 MID SE', 'https://sklep.sizeer.com/api/images/offer-1015992660/seo/gallery/thumbnails/images/43/4346362/m72e7fc7b20210fbe26e7cb119361c2dc_508650_z_1.jpg', 'kat1'),
(5, '\r\nJORDAN BLUZA Z KAPTUREM M J BRKLN FLC PO', 'https://sklep.sizeer.com/api/images/offer-1052287264/seo/gallery/thumbnails/images/46/4610268/mce99878bb79e0e99c59848191e6aceb1_515779_z_1.jpg', 'kat2'),
(6, 'NIKE BLUZA ROZPINANA SPORTSWEAR CLUB FLEECE', 'https://sklep.sizeer.com/api/images/offer-1027399704/seo/gallery/thumbnails/images/22/2268416/mcc902f77c8f626f4921d201765937015_449566_z_1.jpg', 'kat2'),
(7, 'NIKE KURTKA LeBron James M NK SFADV NBA', 'https://sklep.sizeer.com/api/images/offer-1009056994/seo/gallery/thumbnails/images/45/4573176/m38120996b1fcd0469e3bfefc375a09d6_505500_z_1.jpg', 'kat2'),
(8, 'NEW ERA CZAPKA MLB BASIC NY YANKEES', 'https://sklep.sizeer.com/api/images/offer-975991224/seo/gallery/thumbnails/images/77/77134/m702787e755564fb2e865378fc4fa627a_334643_z_1.jpg', 'kat3'),
(9, 'NEW ERA CZAPKA WB WASHED 920 DAFFY DAFFY DUCK', 'https://sklep.sizeer.com/api/images/offer-1052249306/seo/gallery/thumbnails/images/48/4844998/m99c9f4c5ffdddb2e4207873e17b28685_522391_z_1.jpg', 'kat3'),
(10, 'NEW ERA NBA CHICAGO BULLS 9FIFTY SNAPBACK CAP CHICAGO BULLS', 'https://sklep.sizeer.com/api/images/offer-541622646/seo/gallery/thumbnails/images/27/2718838/me4679644b37ea85de99bffe9f6bb4c35_440253_z_1.jpg', 'kat3');

--
-- Indeksy dla zrzutów tabel
--

--
-- Indeksy dla tabeli `products`
--
ALTER TABLE `products`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `products`
--
ALTER TABLE `products`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
