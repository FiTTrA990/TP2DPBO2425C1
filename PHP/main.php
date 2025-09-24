<?php
require_once "MonitorGaming.php";
session_start();

if (!isset($_SESSION['data_monitor'])) {
    $_SESSION['data_monitor'] = [];
}

// --- TAMBAH DATA ---
if (isset($_POST['tambah'])) {
    $namaFile = null;

    if (!empty($_FILES['gambar']['name'])) {
        $targetDir = "images/";
        if (!is_dir($targetDir)) {
            mkdir($targetDir, 0777, true);
        }
        $namaFile = time() . "_" . basename($_FILES["gambar"]["name"]);
        $targetFile = $targetDir . $namaFile;
        move_uploaded_file($_FILES["gambar"]["tmp_name"], $targetFile);
    }

    $newItem = new MonitorGaming(
        (int)$_POST['id'],
        $_POST['nama'],
        $_POST['merek'],
        (float)$_POST['harga'],
        $namaFile,
        $_POST['ukuranLayar'],
        $_POST['resolusi'],
        $_POST['refreshRate'],
        $_POST['kabelTambahan'],
        $_POST['modeGaming']
    );

    $_SESSION['data_monitor'][] = $newItem;
    header("Location: main.php");
    exit();
}

// --- HAPUS DATA ---
if (isset($_GET['hapus'])) {
    $idToDelete = (int)$_GET['hapus'];
    $_SESSION['data_monitor'] = array_filter(
        $_SESSION['data_monitor'],
        function ($item) use ($idToDelete) {
            return $item->getId() !== $idToDelete;
        }
    );
    header("Location: main.php");
    exit();
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Monitor Gaming</title>
    <style>
        body { font-family: Arial; margin: 20px; }
        table { width: 100%; border-collapse: collapse; margin-top: 20px; }
        th, td { border: 1px solid #ddd; padding: 8px; text-align: center; }
        th { background: #f2f2f2; }
        img { max-width: 100px; max-height: 80px; }
    </style>
</head>
<body>
    <h1>Monitor Gaming</h1>

    <h2>Tambah Monitor Gaming</h2>
    <form action="main.php" method="POST" enctype="multipart/form-data">
        <input type="number" name="id" placeholder="ID" required><br>
        <input type="text" name="nama" placeholder="Nama" required><br>
        <input type="text" name="merek" placeholder="Merek" required><br>
        <input type="number" step="0.01" name="harga" placeholder="Harga" required><br>
        <input type="text" name="ukuranLayar" placeholder="Ukuran Layar" required><br>
        <input type="text" name="resolusi" placeholder="Resolusi" required><br>
        <input type="text" name="refreshRate" placeholder="Refresh Rate" required><br>
        <input type="text" name="kabelTambahan" placeholder="Kabel Tambahan" required><br>
        <input type="text" name="modeGaming" placeholder="Mode" required><br>
        <input type="file" name="gambar" accept="image/*"><br><br>
        <button type="submit" name="tambah">Tambah</button>
    </form>

    <h2>Daftar Monitor Gaming</h2>
    <table>
        <thead>
            <tr>
                <th>ID</th><th>Nama</th><th>Merek</th><th>Harga</th>
                <th>Ukuran</th><th>Resolusi</th><th>Refresh</th>
                <th>Kabel Tambahan</th><th>Mode</th><th>Gambar</th><th>Aksi</th>
            </tr>
        </thead>
        <tbody>
            <?php if (empty($_SESSION['data_monitor'])): ?>
                <tr><td colspan="11">Belum ada data</td></tr>
            <?php else: ?>
                <?php foreach ($_SESSION['data_monitor'] as $item): ?>
                <tr>
                    <td><?= $item->getId() ?></td>
                    <td><?= $item->getNama() ?></td>
                    <td><?= $item->getMerek() ?></td>
                    <td><?= number_format($item->getHarga(), 2, ',', '.') ?></td>
                    <td><?= $item->getUkuranLayar() ?></td>
                    <td><?= $item->getResolusi() ?></td>
                    <td><?= $item->getRefreshRate() ?></td>
                    <td><?= $item->getKabelTambahan() ?></td>
                    <td><?= $item->getModeGaming() ?></td>
                    <td>
                        <?php if ($item->getGambar()): ?>
                            <img src="images/<?= $item->getGambar() ?>" alt="gambar">
                        <?php endif; ?>
                    </td>
                    <td>
                        <a href="main.php?hapus=<?= $item->getId() ?>" onclick="return confirm('Hapus data?')">Hapus</a>
                    </td>
                </tr>
                <?php endforeach; ?>
            <?php endif; ?>
        </tbody>
    </table>
</body>
</html>

