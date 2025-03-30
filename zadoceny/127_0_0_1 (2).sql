-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Mar 30, 2025 at 05:35 PM
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
-- Database: `grades`
--
CREATE DATABASE IF NOT EXISTS `grades` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `grades`;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `angielski`
--

CREATE TABLE `angielski` (
  `idang` int(11) NOT NULL,
  `ocena` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `angielski`
--

INSERT INTO `angielski` (`idang`, `ocena`) VALUES
(1, 4),
(2, 3),
(3, 3),
(4, 5);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `fizyka`
--

CREATE TABLE `fizyka` (
  `idfiz` int(11) NOT NULL,
  `ocena` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `fizyka`
--

INSERT INTO `fizyka` (`idfiz`, `ocena`) VALUES
(1, 2),
(2, 3),
(3, 3),
(4, 4);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `matematyka`
--

CREATE TABLE `matematyka` (
  `idmat` int(11) NOT NULL,
  `ocena` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `matematyka`
--

INSERT INTO `matematyka` (`idmat`, `ocena`) VALUES
(1, 3),
(2, 4),
(3, 4),
(4, 3);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `polski`
--

CREATE TABLE `polski` (
  `idpol` int(11) NOT NULL,
  `ocena` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `polski`
--

INSERT INTO `polski` (`idpol`, `ocena`) VALUES
(1, 3),
(2, 3),
(3, 4),
(4, 3);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `wf`
--

CREATE TABLE `wf` (
  `idwf` int(11) NOT NULL,
  `ocena` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `wf`
--

INSERT INTO `wf` (`idwf`, `ocena`) VALUES
(1, 4),
(2, 5),
(3, 5),
(4, 6);

--
-- Indeksy dla zrzutów tabel
--

--
-- Indeksy dla tabeli `angielski`
--
ALTER TABLE `angielski`
  ADD PRIMARY KEY (`idang`);

--
-- Indeksy dla tabeli `fizyka`
--
ALTER TABLE `fizyka`
  ADD PRIMARY KEY (`idfiz`);

--
-- Indeksy dla tabeli `matematyka`
--
ALTER TABLE `matematyka`
  ADD PRIMARY KEY (`idmat`);

--
-- Indeksy dla tabeli `polski`
--
ALTER TABLE `polski`
  ADD PRIMARY KEY (`idpol`);

--
-- Indeksy dla tabeli `wf`
--
ALTER TABLE `wf`
  ADD PRIMARY KEY (`idwf`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `angielski`
--
ALTER TABLE `angielski`
  MODIFY `idang` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `fizyka`
--
ALTER TABLE `fizyka`
  MODIFY `idfiz` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `matematyka`
--
ALTER TABLE `matematyka`
  MODIFY `idmat` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `polski`
--
ALTER TABLE `polski`
  MODIFY `idpol` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `wf`
--
ALTER TABLE `wf`
  MODIFY `idwf` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
